//
//  directory.cpp
//  ECS_040_Program_06
//
//  Created by Justin Weich on 2/18/16.
//  Copyright © 2016 Justin Weich. All rights reserved.
//

#include "directory.h"

File::File(const char* input)
{
	char* temp = new char;
	strcpy(temp, input);
	name = temp;
}

File::~File()
{
	delete name;
}

const char* File::getName()
{
	return name;
}

bool File::find(const char* input)
{
	return false;
}

void File::insert()
{
	
}

bool File::operator<(const File&)
{
	return false;
}

bool File::operator>(const File&)
{
  return false;
}

bool File::operator==(const File&)
{
  return false;
}

Directory::Directory(const char* arg) :
  File(arg),
  files(new ListNode<File*>(NULL, NULL, new File(arg)))
{
}


Directory::~Directory()
{
  
}

bool Directory::find(char* input)
{
	if (!strcmp(getName(), input))
			{
				return true;
			}

	return false;
}

void Directory::insert()
{
  
}

bool Directory::operator<(const File&)
{
  return false;
}

bool Directory::operator>(const File&)
{
  return false;
}

bool Directory::operator==(const File&)
{
  return false;
}


