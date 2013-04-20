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

#ifndef incl_HPHP_TEST_EXT_MAILPARSE_H_
#define incl_HPHP_TEST_EXT_MAILPARSE_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtMailparse : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_mail();
  bool test_ezmlm_hash();
  bool test_mailparse_msg_create();
  bool test_mailparse_msg_free();
  bool test_mailparse_msg_parse_file();
  bool test_mailparse_msg_parse();
  bool test_mailparse_msg_extract_part_file();
  bool test_mailparse_msg_extract_whole_part_file();
  bool test_mailparse_msg_extract_part();
  bool test_mailparse_msg_get_part_data();
  bool test_mailparse_msg_get_part();
  bool test_mailparse_msg_get_structure();
  bool test_mailparse_rfc822_parse_addresses();
  bool test_mailparse_stream_encode();
  bool test_mailparse_uudecode_all();
  bool test_mailparse_determine_best_xfer_encoding();
};

///////////////////////////////////////////////////////////////////////////////

#endif // incl_HPHP_TEST_EXT_MAILPARSE_H_
