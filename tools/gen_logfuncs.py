#!/usr/bin/env python3
# Generate the GL logging functions source ( glimp_logfuncs.cpp ) from the
# GL API description files under sys/gllog.
#
# Python 3 port of sys/gllog/logfunc.py and sys/gllog/read.py ( those scripts
# only run under Python 2 ). The output layout matches the generator in
# sys/scons/SConscript.gl: the gl.api logging functions first, then the glX
# ones inside #ifdef __linux__ and the wgl ones inside #ifdef WIN32.

import re
import sys
import time


def read_gl(f_in):
    # utility to process the incoming GL description
    gl = []
    wgl = []
    glX = []

    for line in f_in.read().split('\n'):
        if len(line):  # drop empty lines
            tokens = line.split(';')
            if tokens[1] == 'qgl':
                gl.append(tokens)
            elif tokens[1] == 'qwgl':
                wgl.append(tokens)
            elif tokens[1] == 'qglX':
                glX.append(tokens)
            else:
                sys.stderr.write('ERROR: unknown type %s\n' % tokens[1])
                raise SystemExit('abort')

    return (gl, wgl, glX)


def do_logfunc(f_in, f_out):
    # generate logging code, analyzing the parameters for verbose and call
    (gl, wgl, glX) = read_gl(f_in)

    for l in (gl, glX):
        for t in l:
            # process ret type to strip trailing spaces
            t[0] = t[0].strip()
            f_out.write('static %s APIENTRY log%s(%s) {\n' % (t[0], t[2], t[3]))
            # work on parameters
            base_params = t[3].split(',')
            # init format string and parameter list
            params = []
            format = t[1][1:] + t[2]
            # a general help list
            names = []
            for i in base_params:
                regex = re.compile('([a-zA-Z0-9]*)$')
                name = regex.search(i).group(1)
                type = i[0:len(i) - len(name)].strip()

                # catch type with no name
                if len(type) == 0:
                    type = name
                    name = ''

                names.append(name)
                # verbose the types
                if type == 'GLenum':
                    format += ' %s'
                    params.append('EnumString(' + name + ')')
                elif type in ('GLfloat', 'GLclampf', 'GLdouble'):
                    format += ' %g'
                    params.append(name)
                elif type in ('GLint', 'GLuint', 'GLsizei', 'GLbyte', 'GLshort', 'GLubyte', 'GLushort'):
                    format += ' %d'
                    params.append(name)
                elif type == 'GLboolean':
                    format += ' %s'
                    params.append(name + ' ? "Y" : "N"')
                elif type == 'void':
                    pass
                else:
                    f_out.write('// unknown type: "%s" name: "%s"\n' % (type, name))
                    format += ' \'' + type + ' ' + name + '\''
            f_out.write('\tfprintf( tr.logFile, "' + format + '\\n"')
            for par in params:
                f_out.write(', ' + par)
            f_out.write(' );\n')
            if t[0] != 'void':
                f_out.write('\treturn dll%s(' % t[2])
            else:
                f_out.write('\tdll%s(' % t[2])
            started = 0
            for i in names:
                if started:
                    f_out.write(', ')
                else:
                    started = 1
                f_out.write(i)
            f_out.write(');\n')
            f_out.write('}\n\n')


def main():
    if len(sys.argv) != 3:
        sys.stderr.write('usage: gen_logfuncs.py <sys/gllog dir> <output .cpp>\n')
        return 1

    gllog_dir = sys.argv[1]
    target = sys.argv[2]

    with open(target, 'w') as f_out:
        f_out.write('// generated file, do not modify!\n')
        f_out.write('// ' + time.asctime() + '\n')
        f_out.write('// see neo/CMakeLists.txt and sys/gllog/\n\n')

        with open(gllog_dir + '/gl.api', 'r') as f_in:
            do_logfunc(f_in, f_out)

        f_out.write('\n#ifdef __linux__\n\n')
        with open(gllog_dir + '/glX.api', 'r') as f_in:
            do_logfunc(f_in, f_out)
        f_out.write('\n#endif\n\n')

        f_out.write('\n#ifdef WIN32\n\n')
        with open(gllog_dir + '/wgl.api', 'r') as f_in:
            do_logfunc(f_in, f_out)
        f_out.write('\n#endif\n\n')

    return 0


if __name__ == '__main__':
    sys.exit(main())
