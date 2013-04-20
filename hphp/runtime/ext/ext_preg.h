/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_EXT_PREG_H_
#define incl_HPHP_EXT_PREG_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
// pcre

Variant f_preg_grep(CStrRef pattern, CArrRef input, int flags = 0);

Variant f_preg_match(CStrRef pattern, CStrRef subject, VRefParam matches = uninit_null(),
                     int flags = 0, int offset = 0);

Variant f_preg_match_all(CStrRef pattern, CStrRef subject, VRefParam matches,
                         int flags = 0, int offset = 0);

Variant f_preg_replace(CVarRef pattern, CVarRef replacement, CVarRef subject,
                       int limit = -1, VRefParam count = uninit_null());

Variant f_preg_replace_callback(CVarRef pattern, CVarRef callback,
                                CVarRef subject, int limit = -1,
                                VRefParam count = uninit_null());

Variant f_preg_split(CVarRef pattern, CVarRef subject, int limit = -1,
                     int flags = 0);

String f_preg_quote(CStrRef str, CStrRef delimiter = null_string);

int64_t f_preg_last_error();

///////////////////////////////////////////////////////////////////////////////
// deprecating these

String f_ereg_replace(CStrRef pattern, CStrRef replacement, CStrRef str);
String f_eregi_replace(CStrRef pattern, CStrRef replacement, CStrRef str);
Variant f_ereg(CStrRef pattern, CStrRef str, VRefParam regs = uninit_null());
Variant f_eregi(CStrRef pattern, CStrRef str, VRefParam regs = uninit_null());
Variant f_split(CStrRef pattern, CStrRef str, int limit = -1);
Variant f_spliti(CStrRef pattern, CStrRef str, int limit = -1);
String f_sql_regcase(CStrRef str);

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_PREG_H_
