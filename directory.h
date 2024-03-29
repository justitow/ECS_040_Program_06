//
//  directory.hpp
//  ECS_040_Program_06
//


#ifndef directory_h
#define directory_h

#include <iostream>
#include <cstring>

#include "list.h"

class File
{
protected:
  char* name;
private:
public:
  File(const char* input);
  virtual ~File();
  
  const char* getName() const;
  virtual bool find(File* input);
  virtual void insert(File* file);
  virtual bool operator<(const File& rhs);
  virtual bool operator>(const File& rhs);
  virtual bool operator==(const File& rhs);
};  // Class File

class Directory : public File
{
protected:
private:
  List<File*> files;
public:
  Directory(const char* arg);
  ~Directory();

  virtual bool find(File* input);
  virtual void insert(File* file);
  virtual bool operator<(const File& rhs);
  virtual bool operator>(const File& rhs);
  virtual bool operator==(const File& rhs);
}; // Class Directory

#endif