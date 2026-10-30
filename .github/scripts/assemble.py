#!/usr/bin/env python3
"""Merge per-leg logs and digest fragments into the digest/ folder. Every
platform and architecture pair gets one full digest, one compact digest
and one log file: the ubuntu-latest-x86-* legs land in
digest/ubuntu-x86.md, digest/ubuntu-x86-compact.md and
digest/ubuntu-x86.log, the windows-latest-x86-* legs in the matching
digest/windows-x86.* files."""

import glob
import os

MAX_LOG = 400000  # bytes kept per failed leg


def read(path):
    with open(path, errors="replace") as f:
        return f.read()


def leg_key(leg):
    """Group a leg name like ubuntu-latest-x86-debug by platform and
    architecture. The runner version field is skipped so a runner image
    update does not fork the file names."""
    parts = leg.split("-")
    if len(parts) < 3:
        return (parts[0], "unknown")
    return (parts[0], parts[2])


def main():
    frag_files = sorted(glob.glob("logs/digest-fragment-*.md"))
    status_files = sorted(glob.glob("logs/status-*"))
    log_files = sorted(glob.glob("logs/log-*.log"))

    statuses = {}
    for sf in status_files:
        parts = read(sf).strip().split("|", 1)
        if len(parts) == 2:
            statuses[parts[0]] = parts[1]

    # publish runs on a workflow_run event where GITHUB_SHA points at the
    # default branch head, not the built commit: COMMIT_SHA wins when set
    commit = os.environ.get("COMMIT_SHA") or os.environ.get("GITHUB_SHA", "unknown")
    commit = commit[:12]

    os.makedirs("digest", exist_ok=True)

    for key in sorted({leg_key(leg) for leg in statuses}):
        platform, arch = key
        name = "%s-%s" % (platform, arch)
        legs = [l for l in sorted(statuses) if leg_key(l) == key]
        leg_set = set(legs)

        # full digest: every fragment of this platform and architecture
        digest = ["# Build digest\n\n", "commit: %s\n\n" % commit]
        for leg in legs:
            digest.append("- %s: %s\n" % (leg, statuses[leg]))
        digest.append("\n")
        for ff in frag_files:
            leg = os.path.basename(ff)[len("digest-fragment-"):-len(".md")]
            if leg in leg_set:
                digest.append(read(ff).strip() + "\n\n")
        with open("digest/%s.md" % name, "w") as f:
            f.write("".join(digest))

        # compact digest: the full digest concatenates every leg fragment
        # and grows past 1MB once warnings appear, too big for API reads.
        # Keep one representative fragment next to the per-leg statuses so
        # the tree state stays readable without the full file
        compact = ["# Compact build digest\n\n", "commit: %s\n\n" % commit]
        for leg in legs:
            compact.append("- %s: %s\n" % (leg, statuses[leg]))
        compact.append("\n")
        for ff in frag_files:
            leg = os.path.basename(ff)[len("digest-fragment-"):-len(".md")]
            if leg in leg_set:
                compact.append(read(ff).strip() + "\n\n")
                break
        with open("digest/%s-compact.md" % name, "w") as f:
            f.write("".join(compact))

        # one log file per platform and architecture: the failed leg logs
        # concatenated, a single line when every leg succeeded
        chunks = []
        for lf in log_files:
            leg = os.path.basename(lf)[len("log-"):-len(".log")]
            if leg not in leg_set:
                continue
            if statuses.get(leg) == "success":
                # successful leg logs stay in the artifacts only
                continue
            text = read(lf)
            if len(text) > MAX_LOG:
                half = MAX_LOG // 2
                text = text[:half] + "\n... [truncated] ...\n" + text[-half:]
            chunks.append("==== %s (%s) ====\n\n" % (leg, statuses.get(leg, "unknown")))
            chunks.append(text + "\n\n")
        if chunks:
            content = "".join(chunks)
        elif legs:
            content = "all %s legs succeeded\n" % name
        else:
            content = "no %s legs ran\n" % name
        with open("digest/%s.log" % name, "w") as f:
            f.write(content)


main()
