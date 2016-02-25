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

bool File::find(const char* input)
{
  cout << name << endl;
  return true;
} // find()

void File::insert(File* file)
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

  if (strcmp(getName(), input) == 0) //perfect match, prints List of Directory
  {
    files.print();
      //loop through List<File*> files and find() to print file names
      return true;
  } // otherwise, not a match
  else //imperfect match, call find of its List
    {
      File* file = new File(input);
      files.find(file);
      //call find of its List
      return false;
    } // else
} // find()

void Directory::insert(File* file)
{
  if (strcmp(getName(), file->getName()) == 0)
  {
    //do nothing 
  }
  else
  {
    files.insert(file);
  }
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




