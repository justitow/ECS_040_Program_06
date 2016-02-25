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

void read(const char* fileName, List<File*>* mainList) //fileName is argv[1]
{
  std::cout << fileName << std::endl;
  ifstream file;
  file.open(fileName);
  char line[256];
  const char* ptr;
  while (file.getline(line, 256))
  {
    ptr = line;
    /*
    if (*ptr == 'd')
    {
      ptr = strrchr(line, ' ');
      ptr++;
      Directory *directory = new Directory(ptr);
      directory->insert(directory); //should this be mainList?

    } // otherwise, its not a direcotry
    else //its a file
    {
        ptr = strrchr(line, ' ');
        ptr++;
        File *file = new File(ptr);
        file->insert(file);
    } //else nothing happens
    */
    char* token = strtok(line, " ");
    for (int i = 0; i < 7; i++)
    {
      strok(NULL, " ")
    }
    cout << token;

    
  } // while
} // read

int main(int argc, const char * argv[])
{
  char input[256];
  List<File*>* list = new List<File*>();
  read(argv[1], list);
  while (strcmp(input, "Done") != 0)
  {
    
  }
  
  return 0;
} // main()
