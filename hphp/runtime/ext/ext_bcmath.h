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

#ifndef incl_HPHP_EXT_BCMATH_H_
#define incl_HPHP_EXT_BCMATH_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

bool f_bcscale(int64_t scale);
String f_bcadd(CStrRef left, CStrRef right, int64_t scale = -1);
String f_bcsub(CStrRef left, CStrRef right, int64_t scale = -1);
int64_t f_bccomp(CStrRef left, CStrRef right, int64_t scale = -1);
String f_bcmul(CStrRef left, CStrRef right, int64_t scale = -1);
String f_bcdiv(CStrRef left, CStrRef right, int64_t scale = -1);
String f_bcmod(CStrRef left, CStrRef right);
String f_bcpow(CStrRef left, CStrRef right, int64_t scale = -1);
Variant f_bcpowmod(CStrRef left, CStrRef right, CStrRef modulus,
                  int64_t scale = -1);
Variant f_bcsqrt(CStrRef operand, int64_t scale = -1);

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_BCMATH_H_
