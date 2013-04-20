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

#ifndef incl_HPHP_TEST_EXT_MEMCACHE_H_
#define incl_HPHP_TEST_EXT_MEMCACHE_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtMemcache : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_memcache_connect();
  bool test_memcache_pconnect();
  bool test_memcache_add();
  bool test_memcache_set();
  bool test_memcache_replace();
  bool test_memcache_get();
  bool test_memcache_delete();
  bool test_memcache_increment();
  bool test_memcache_decrement();
  bool test_memcache_close();
  bool test_memcache_debug();
  bool test_memcache_get_version();
  bool test_memcache_flush();
  bool test_memcache_setoptimeout();
  bool test_memcache_get_server_status();
  bool test_memcache_set_compress_threshold();
  bool test_memcache_get_stats();
  bool test_memcache_get_extended_stats();
  bool test_memcache_set_server_params();
  bool test_memcache_add_server();
};

///////////////////////////////////////////////////////////////////////////////

#endif // incl_HPHP_TEST_EXT_MEMCACHE_H_
