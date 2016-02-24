//
//  directory.cpp
//  ECS_040_Program_06
//


#include "directory.h"
#include "list.h"

#include <iostream>
#include <cstring>

using namespace std;

File::File(const char* input)
{
	name = new char[strlen(input) + 1];
	strcpy(name, input);
} // File()

File::~File()
{
	delete [] name; // what does the [] do?
} // ~File

const char* File::getName() const
{
	return name;
} // getName()

bool File::find(const char* input) //input not needed?
{
	cout << name << endl;
	return true;
} // find()

void File::insert(const char* input)
{
	//File::insert does nothing!
} //insert()

bool File::operator<(const File& rhs)
{
	if ((strcmp(name, rhs.name)) < 0)
	  return true;
	return false;
} // operator<

bool File::operator>(const File& rhs)
{
	if ((strcmp(name, rhs.name)) > 0)
	  return true;
  return false;
} // operator>

bool File::operator==(const File& rhs)
{
	if ((strcmp(name, rhs.name)) == 0)
	  return true;
  return false;
} //opeartor==

Directory::Directory(const char* arg) :
  File(arg)//,
  //files(new ListNode<File*>(NULL, NULL, new File(arg)))
{
} // Directory()


Directory::~Directory()
{
} // ~Directory()

bool Directory::find(const char* input)
{

	if (!strcmp(getName(), input)) //perfect match, prints List of Directory
			{
				//loop through List<File*> files and find() to print file names
				return true;
			} // otherwise, not a match
  else //imperfect match, call find of its List
    {
    	//call find of its List
    	return false;
    } // else
} // find()

void Directory::insert(const char* input)
{
  //loop through main's list (of directories?) and insert if imperfect match
} // insert

bool Directory::operator<(const File& rhs)
{

	if (strncmp(getName(), rhs.getName(), strlen(getName())) < 0)
	  return true;
  return false;
} //operator<

bool Directory::operator>(const File& rhs)
{
	if (strncmp(getName(), rhs.getName(), strlen(getName())) > 0)
	  return true;
  return false;
} // operator>

bool Directory::operator==(const File& rhs)
{
	const char *ptr;

	if (strncmp(getName(), rhs.getName(), strlen(getName())) == 0)
	{
		ptr = rhs.getName();
	  ptr += strlen(getName());

	  if (*ptr == '/')
	    return true;
	} //otherwise, name isn't right.

  return false;
} //operator==




