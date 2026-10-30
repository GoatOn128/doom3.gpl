# Compact build digest

commit: b224b654f6c1

- ubuntu-latest-x86-debug: success
- ubuntu-latest-x86-release: success
- windows-latest-x86-debug: failure
- windows-latest-x86-release: cancelled

## ubuntu-latest-x86-debug

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-debug

status: failure

errors: 20
warnings: 0 in 0 kinds

### errors

curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__CertFreeCertificateContext@4 referenced in function _bypass_cert_verify [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_init referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_sslinit referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_unbind_s referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_set_option referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_simple_bind_s referenced in function _ldap_win_bind [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_search_s referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_msgfree referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_err2string referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_first_entry referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_next_entry referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_first_attribute referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_next_attribute referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_get_values_len referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_value_free_len referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_get_dn referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ldap_memfree referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(ldap.obj) : error LNK2019: unresolved external symbol __imp__ber_free referenced in function _show_vals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
curllib.lib(winapi.obj) : error LNK2019: unresolved external symbol _BCryptGenRandom@16 referenced in function _curlx_win32_random [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
D:\a\doom3.gpl\doom3.gpl\DOOM3.exe : fatal error LNK1120: 19 unresolved externals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]

### failure context


### warning kinds

