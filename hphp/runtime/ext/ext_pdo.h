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

#ifndef incl_HPHP_EXT_PDO_H_
#define incl_HPHP_EXT_PDO_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>
#include <runtime/ext/pdo_driver.h>
namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Array f_pdo_drivers();
extern const int64_t q_PDO$$PARAM_BOOL;
extern const int64_t q_PDO$$PARAM_NULL;
extern const int64_t q_PDO$$PARAM_INT;
extern const int64_t q_PDO$$PARAM_STR;
extern const int64_t q_PDO$$PARAM_LOB;
extern const int64_t q_PDO$$PARAM_STMT;
extern const int64_t q_PDO$$PARAM_INPUT_OUTPUT;
extern const int64_t q_PDO$$PARAM_EVT_ALLOC;
extern const int64_t q_PDO$$PARAM_EVT_FREE;
extern const int64_t q_PDO$$PARAM_EVT_EXEC_PRE;
extern const int64_t q_PDO$$PARAM_EVT_EXEC_POST;
extern const int64_t q_PDO$$PARAM_EVT_FETCH_PRE;
extern const int64_t q_PDO$$PARAM_EVT_FETCH_POST;
extern const int64_t q_PDO$$PARAM_EVT_NORMALIZE;
extern const int64_t q_PDO$$FETCH_USE_DEFAULT;
extern const int64_t q_PDO$$FETCH_LAZY;
extern const int64_t q_PDO$$FETCH_ASSOC;
extern const int64_t q_PDO$$FETCH_NUM;
extern const int64_t q_PDO$$FETCH_BOTH;
extern const int64_t q_PDO$$FETCH_OBJ;
extern const int64_t q_PDO$$FETCH_BOUND;
extern const int64_t q_PDO$$FETCH_COLUMN;
extern const int64_t q_PDO$$FETCH_CLASS;
extern const int64_t q_PDO$$FETCH_INTO;
extern const int64_t q_PDO$$FETCH_FUNC;
extern const int64_t q_PDO$$FETCH_GROUP;
extern const int64_t q_PDO$$FETCH_UNIQUE;
extern const int64_t q_PDO$$FETCH_KEY_PAIR;
extern const int64_t q_PDO$$FETCH_CLASSTYPE;
extern const int64_t q_PDO$$FETCH_SERIALIZE;
extern const int64_t q_PDO$$FETCH_PROPS_LATE;
extern const int64_t q_PDO$$FETCH_NAMED;
extern const int64_t q_PDO$$ATTR_AUTOCOMMIT;
extern const int64_t q_PDO$$ATTR_PREFETCH;
extern const int64_t q_PDO$$ATTR_TIMEOUT;
extern const int64_t q_PDO$$ATTR_ERRMODE;
extern const int64_t q_PDO$$ATTR_SERVER_VERSION;
extern const int64_t q_PDO$$ATTR_CLIENT_VERSION;
extern const int64_t q_PDO$$ATTR_SERVER_INFO;
extern const int64_t q_PDO$$ATTR_CONNECTION_STATUS;
extern const int64_t q_PDO$$ATTR_CASE;
extern const int64_t q_PDO$$ATTR_CURSOR_NAME;
extern const int64_t q_PDO$$ATTR_CURSOR;
extern const int64_t q_PDO$$ATTR_ORACLE_NULLS;
extern const int64_t q_PDO$$ATTR_PERSISTENT;
extern const int64_t q_PDO$$ATTR_STATEMENT_CLASS;
extern const int64_t q_PDO$$ATTR_FETCH_TABLE_NAMES;
extern const int64_t q_PDO$$ATTR_FETCH_CATALOG_NAMES;
extern const int64_t q_PDO$$ATTR_DRIVER_NAME;
extern const int64_t q_PDO$$ATTR_STRINGIFY_FETCHES;
extern const int64_t q_PDO$$ATTR_MAX_COLUMN_LEN;
extern const int64_t q_PDO$$ATTR_EMULATE_PREPARES;
extern const int64_t q_PDO$$ATTR_DEFAULT_FETCH_MODE;
extern const int64_t q_PDO$$ERRMODE_SILENT;
extern const int64_t q_PDO$$ERRMODE_WARNING;
extern const int64_t q_PDO$$ERRMODE_EXCEPTION;
extern const int64_t q_PDO$$CASE_NATURAL;
extern const int64_t q_PDO$$CASE_LOWER;
extern const int64_t q_PDO$$CASE_UPPER;
extern const int64_t q_PDO$$NULL_NATURAL;
extern const int64_t q_PDO$$NULL_EMPTY_STRING;
extern const int64_t q_PDO$$NULL_TO_STRING;
extern const StaticString q_PDO$$ERR_NONE;
extern const int64_t q_PDO$$FETCH_ORI_NEXT;
extern const int64_t q_PDO$$FETCH_ORI_PRIOR;
extern const int64_t q_PDO$$FETCH_ORI_FIRST;
extern const int64_t q_PDO$$FETCH_ORI_LAST;
extern const int64_t q_PDO$$FETCH_ORI_ABS;
extern const int64_t q_PDO$$FETCH_ORI_REL;
extern const int64_t q_PDO$$CURSOR_FWDONLY;
extern const int64_t q_PDO$$CURSOR_SCROLL;
extern const int64_t q_PDO$$MYSQL_ATTR_USE_BUFFERED_QUERY;
extern const int64_t q_PDO$$MYSQL_ATTR_LOCAL_INFILE;
extern const int64_t q_PDO$$MYSQL_ATTR_MAX_BUFFER_SIZE;
extern const int64_t q_PDO$$MYSQL_ATTR_INIT_COMMAND;
extern const int64_t q_PDO$$MYSQL_ATTR_READ_DEFAULT_FILE;
extern const int64_t q_PDO$$MYSQL_ATTR_READ_DEFAULT_GROUP;
extern const int64_t q_PDO$$MYSQL_ATTR_COMPRESS;
extern const int64_t q_PDO$$MYSQL_ATTR_DIRECT_QUERY;
extern const int64_t q_PDO$$MYSQL_ATTR_FOUND_ROWS;
extern const int64_t q_PDO$$MYSQL_ATTR_IGNORE_SPACE;

///////////////////////////////////////////////////////////////////////////////
// class PDO

FORWARD_DECLARE_CLASS_BUILTIN(PDO);
class c_PDO : public ExtObjectData, public Sweepable {
 public:
  DECLARE_CLASS(PDO, PDO, ObjectData)

  // need to implement
  public: c_PDO(VM::Class* cls = c_PDO::s_cls);
  public: ~c_PDO();
  public: void t___construct(CStrRef dsn, CStrRef username = null_string, CStrRef password = null_string, CArrRef options = null_array);
  public: Variant t_prepare(CStrRef statement, CArrRef options = null_array);
  public: bool t_begintransaction();
  public: bool t_commit();
  public: bool t_rollback();
  public: bool t_setattribute(int64_t attribute, CVarRef value);
  public: Variant t_getattribute(int64_t attribute);
  public: Variant t_exec(CStrRef query);
  public: Variant t_lastinsertid(CStrRef seqname = null_string);
  public: Variant t_errorcode();
  public: Array t_errorinfo();
  public: Variant t_query(CStrRef sql);
  public: Variant t_quote(CStrRef str, int64_t paramtype = q_PDO$$PARAM_STR);
  public: Variant t___wakeup();
  public: Variant t___sleep();
  public: static Array ti_getavailabledrivers(const char* cls );
  public: static Array t_getavailabledrivers() {
    return ti_getavailabledrivers("pdo");
  }

  public: sp_PDOConnection m_dbh;
};

///////////////////////////////////////////////////////////////////////////////
// class PDOStatement

FORWARD_DECLARE_CLASS_BUILTIN(PDOStatement);
class c_PDOStatement : public ExtObjectData, public Sweepable {
 public:
  DECLARE_CLASS(PDOStatement, PDOStatement, ObjectData)

  // need to implement
  public: c_PDOStatement(VM::Class* cls = c_PDOStatement::s_cls);
  public: ~c_PDOStatement();
  public: void t___construct();
  public: Variant t_execute(CArrRef params = null_array);
  public: Variant t_fetch(int64_t how = 0, int64_t orientation = q_PDO$$FETCH_ORI_NEXT, int64_t offset = 0);
  public: Variant t_fetchobject(CStrRef class_name = null_string, CVarRef ctor_args = uninit_null());
  public: Variant t_fetchcolumn(int64_t column_numner = 0);
  public: Variant t_fetchall(int64_t how = 0, CVarRef class_name = uninit_null(), CVarRef ctor_args = uninit_null());
  public: bool t_bindvalue(CVarRef paramno, CVarRef param, int64_t type = q_PDO$$PARAM_STR);
  public: bool t_bindparam(CVarRef paramno, VRefParam param, int64_t type = q_PDO$$PARAM_STR, int64_t max_value_len = 0, CVarRef driver_params = uninit_null());
  public: bool t_bindcolumn(CVarRef paramno, VRefParam param, int64_t type = q_PDO$$PARAM_STR, int64_t max_value_len = 0, CVarRef driver_params = uninit_null());
  public: int64_t t_rowcount();
  public: Variant t_errorcode();
  public: Array t_errorinfo();
  public: Variant t_setattribute(int64_t attribute, CVarRef value);
  public: Variant t_getattribute(int64_t attribute);
  public: int64_t t_columncount();
  public: Variant t_getcolumnmeta(int64_t column);
  public: bool t_setfetchmode(int _argc, int64_t mode, CArrRef _argv = null_array);
  public: bool t_nextrowset();
  public: bool t_closecursor();
  public: Variant t_debugdumpparams();
  public: Variant t_current();
  public: Variant t_key();
  public: Variant t_next();
  public: Variant t_rewind();
  public: Variant t_valid();
  public: Variant t___wakeup();
  public: Variant t___sleep();



  public: sp_PDOStatement m_stmt;
  public: Variant m_row;
  public: int m_rowIndex;
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_PDO_H_
