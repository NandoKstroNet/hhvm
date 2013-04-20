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

#ifndef incl_HPHP_TEST_EXT_NETWORK_H_
#define incl_HPHP_TEST_EXT_NETWORK_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtNetwork : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_gethostname();
  bool test_gethostbyaddr();
  bool test_gethostbyname();
  bool test_gethostbynamel();
  bool test_getprotobyname();
  bool test_getprotobynumber();
  bool test_getservbyname();
  bool test_getservbyport();
  bool test_inet_ntop();
  bool test_inet_pton();
  bool test_ip2long();
  bool test_long2ip();
  bool test_dns_check_record();
  bool test_checkdnsrr();
  bool test_dns_get_record();
  bool test_dns_get_mx();
  bool test_getmxrr();
  bool test_fsockopen();
  bool test_pfsockopen();
  bool test_socket_get_status();
  bool test_socket_set_blocking();
  bool test_socket_set_timeout();
  bool test_header();
  bool test_headers_list();
  bool test_headers_sent();
  bool test_header_register_callback();
  bool test_header_remove();
  bool test_get_http_request_size();
  bool test_setcookie();
  bool test_setrawcookie();
  bool test_define_syslog_variables();
  bool test_openlog();
  bool test_closelog();
  bool test_syslog();
};

///////////////////////////////////////////////////////////////////////////////

#endif // incl_HPHP_TEST_EXT_NETWORK_H_
