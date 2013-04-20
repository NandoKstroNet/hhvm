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

#ifndef incl_HPHP_EXT_ITERATOR_H_
#define incl_HPHP_EXT_ITERATOR_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>
#include <runtime/ext/ext_splfile.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

class DirectoryIterator: public SplFileInfo {
public:
  DECLARE_OBJECT_ALLOCATION(DirectoryIterator);

  DirectoryIterator(CStrRef path);

  static StaticString s_class_name;
  // overriding ResourceData
  virtual CStrRef o_getClassNameHook() const { return s_class_name; }
  virtual bool isResource() const { return !m_dir.isNull();}
  String getPathName() const;

  void rewind();
  bool valid();
  void next();
  bool isdot();

public:
  String m_path;
  Object m_dir;
  Variant m_dirEntry;
  int m_index;
};

class RecursiveDirectoryIterator: public DirectoryIterator {
public:
  DECLARE_OBJECT_ALLOCATION(RecursiveDirectoryIterator);

  RecursiveDirectoryIterator(CStrRef path, int flags);

  static StaticString s_class_name;
  // overriding ResourceData
  virtual CStrRef o_getClassNameHook() const { return s_class_name; }
  virtual bool isResource() const { return !m_dir.isNull();}
  void rewind();
  void next();

public:
  int m_flags;
};

class RecursiveIteratorIterator: public SweepableResourceData {
public:
  DECLARE_OBJECT_ALLOCATION(RecursiveIteratorIterator);

  RecursiveIteratorIterator(CObjRef iterator, int mode, int flags);
  ~RecursiveIteratorIterator() {
    freeAllIterators();
  }

  static StaticString s_class_name;
  // overriding ResourceData
  virtual CStrRef o_getClassNameHook() const { return s_class_name; }
  virtual bool isResource() const { return !m_iterator.isNull();}

  void freeAllIterators();

public:
  typedef std::vector<std::pair<ObjectData*,int> > IteratorList;

  Object m_iterator;
  IteratorList m_iterators;
  int m_mode;
  int m_flags;
};

Object f_hphp_recursiveiteratoriterator___construct(CObjRef obj, CObjRef iterator, int64_t mode, int64_t flags);
Object f_hphp_recursiveiteratoriterator_getinneriterator(CObjRef obj);
Variant f_hphp_recursiveiteratoriterator_current(CObjRef obj);
Variant f_hphp_recursiveiteratoriterator_key(CObjRef obj);
void f_hphp_recursiveiteratoriterator_next(CObjRef obj);
void f_hphp_recursiveiteratoriterator_rewind(CObjRef obj);
bool f_hphp_recursiveiteratoriterator_valid(CObjRef obj);

bool f_hphp_directoryiterator___construct(CObjRef obj, CStrRef path);
Variant f_hphp_directoryiterator_key(CObjRef obj);
void f_hphp_directoryiterator_next(CObjRef obj);
void f_hphp_directoryiterator_rewind(CObjRef obj);
void f_hphp_directoryiterator_seek(CObjRef obj, int64_t position);
Variant f_hphp_directoryiterator_current(CObjRef obj);
String f_hphp_directoryiterator___tostring(CObjRef obj);
bool f_hphp_directoryiterator_valid(CObjRef obj);
bool f_hphp_directoryiterator_isdot(CObjRef obj);

bool f_hphp_recursivedirectoryiterator___construct(CObjRef obj, CStrRef path, int64_t flags);
Variant f_hphp_recursivedirectoryiterator_key(CObjRef obj);
void f_hphp_recursivedirectoryiterator_next(CObjRef obj);
void f_hphp_recursivedirectoryiterator_rewind(CObjRef obj);
void f_hphp_recursivedirectoryiterator_seek(CObjRef obj, int64_t position);
Variant f_hphp_recursivedirectoryiterator_current(CObjRef obj);
String f_hphp_recursivedirectoryiterator___tostring(CObjRef obj);
bool f_hphp_recursivedirectoryiterator_valid(CObjRef obj);
bool f_hphp_recursivedirectoryiterator_haschildren(CObjRef obj);
Object f_hphp_recursivedirectoryiterator_getchildren(CObjRef obj);
String f_hphp_recursivedirectoryiterator_getsubpath(CObjRef obj);
String f_hphp_recursivedirectoryiterator_getsubpathname(CObjRef obj);

///////////////////////////////////////////////////////////////////////////////
// class MutableArrayIterator

FORWARD_DECLARE_CLASS_BUILTIN(MutableArrayIterator);
class c_MutableArrayIterator : public ExtObjectData, public Sweepable {
 public:
  DECLARE_CLASS(MutableArrayIterator, MutableArrayIterator, ObjectData)

  // need to implement
  public: c_MutableArrayIterator(VM::Class* cls = c_MutableArrayIterator::s_cls);
  public: ~c_MutableArrayIterator();
  public: void t___construct(VRefParam array);
  public: Variant t_currentref();
  public: Variant t_current();
  public: Variant t_key();
  public: void t_next();
  public: bool t_valid();
  public: Variant t___destruct();


  public: union {
    char m_u[sizeof(MArrayIter)];
    TypedValue m_align;
  };
  public: bool m_valid;

  private: MArrayIter& marr() {
    return *(MArrayIter*)(m_u);
  }
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_ITERATOR_H_
