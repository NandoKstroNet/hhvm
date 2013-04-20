/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
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

#ifndef incl_HPHP_TEST_EXT_ITERATOR_H_
#define incl_HPHP_TEST_EXT_ITERATOR_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtIterator : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_hphp_recursiveiteratoriterator___construct();
  bool test_hphp_recursiveiteratoriterator_getinneriterator();
  bool test_hphp_recursiveiteratoriterator_current();
  bool test_hphp_recursiveiteratoriterator_key();
  bool test_hphp_recursiveiteratoriterator_next();
  bool test_hphp_recursiveiteratoriterator_rewind();
  bool test_hphp_recursiveiteratoriterator_valid();
  bool test_hphp_directoryiterator___construct();
  bool test_hphp_directoryiterator_getatime();
  bool test_hphp_directoryiterator_getbasename();
  bool test_hphp_directoryiterator_getctime();
  bool test_hphp_directoryiterator_getfilename();
  bool test_hphp_directoryiterator_getgroup();
  bool test_hphp_directoryiterator_getinode();
  bool test_hphp_directoryiterator_getmtime();
  bool test_hphp_directoryiterator_getowner();
  bool test_hphp_directoryiterator_getpathname();
  bool test_hphp_directoryiterator_getperms();
  bool test_hphp_directoryiterator_getsize();
  bool test_hphp_directoryiterator_gettype();
  bool test_hphp_directoryiterator_isdir();
  bool test_hphp_directoryiterator_isdot();
  bool test_hphp_directoryiterator_isexecutable();
  bool test_hphp_directoryiterator_isfile();
  bool test_hphp_directoryiterator_islink();
  bool test_hphp_directoryiterator_isreadable();
  bool test_hphp_directoryiterator_iswritable();
  bool test_hphp_directoryiterator_key();
  bool test_hphp_directoryiterator_next();
  bool test_hphp_directoryiterator_rewind();
  bool test_hphp_directoryiterator_seek();
  bool test_hphp_directoryiterator_current();
  bool test_hphp_directoryiterator___tostring();
  bool test_hphp_directoryiterator_valid();
  bool test_hphp_recursivedirectoryiterator___construct();
  bool test_hphp_recursivedirectoryiterator_key();
  bool test_hphp_recursivedirectoryiterator_next();
  bool test_hphp_recursivedirectoryiterator_rewind();
  bool test_hphp_recursivedirectoryiterator_seek();
  bool test_hphp_recursivedirectoryiterator_current();
  bool test_hphp_recursivedirectoryiterator___tostring();
  bool test_hphp_recursivedirectoryiterator_valid();
  bool test_hphp_recursivedirectoryiterator_haschildren();
  bool test_hphp_recursivedirectoryiterator_getchildren();
  bool test_hphp_recursivedirectoryiterator_getsubpath();
  bool test_hphp_recursivedirectoryiterator_getsubpathname();
};

///////////////////////////////////////////////////////////////////////////////

#endif // incl_HPHP_TEST_EXT_ITERATOR_H_
