//
//  directory.hpp
//  ECS_040_Program_06
//
//  Created by Justin Weich on 2/18/16.
//  Copyright © 2016 Justin Weich. All rights reserved.
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
	
	const char* getName();
	virtual bool find(const char* input);
	virtual void insert();
	virtual bool operator<(const File&);
	virtual bool operator>(const File&);
	virtual bool operator==(const File&);
	};

class Directory : public File
{
protected:
private:
	List<File*> files;
public:
	Directory(const char*);
	~Directory();

	virtual bool find(const char* input);
	virtual void insert();
	virtual bool operator<(const File&);
	virtual bool operator>(const File&);
	virtual bool operator==(const File&);
};

#endif