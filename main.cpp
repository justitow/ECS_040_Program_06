//
//  main.cpp
//  ECS_040_Program_06
//

#include "list.h"
#include "directory.h"

#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

void read(const char* fileName) //fileName is argv[1]
{
  ifstream file;
  file.open(fileName);
  char line[256];
  const char* ptr;

  while (file.getline(line, 256))
  {
    ptr = line;

    if (*ptr == 'd')
      {
        ptr = strrchr(line, ' ');
        ptr++;
        Directory *directory = new Directory(ptr);
        directory->insert(directory->getName());
      } // otherwise, its not a direcotry
    else //its a file
      {
        ptr = strrchr(line, ' ');
        ptr++;
        File *file = new File(ptr);
        file->insert(file->getName());
      } //else nothing happens
  } // while
} // read

int main(int argc, const char * argv[])
{
  File* file = new File("hello.txt");
  Directory* dir = new Directory("apple");
  File* newf = new File("aaple");
  File* other = new File("arg");
  File* blah = new File("zz");
  File* dup = new File("zz");
  List<File*> file_structure;
  file_structure.insert(file);
  file_structure.insert(dir);
  file_structure.insert(newf);
  file_structure.insert(other);
  file_structure.insert(dup);
  std::cout << file_structure.find(blah) << std::endl;
  
  file_structure.print();
  return 0;
} // main()
