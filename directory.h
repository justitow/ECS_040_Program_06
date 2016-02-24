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
	File(const char*);
	virtual ~File();
	
	const char* getName() const;
	virtual bool find(const char* input);
	virtual void insert(const char* input);
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
	Directory(const char*);
	~Directory();

	virtual bool find(const char* input);
	virtual void insert(const char* input);
	virtual bool operator<(const File& rhs);
	virtual bool operator>(const File& rhs);
	virtual bool operator==(const File& rhs);
}; // Class Directory

#endif