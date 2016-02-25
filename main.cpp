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
  //std::cout << fileName << std::endl;
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
      mainList->insert(directory); 
    } // otherwise, its not a direcotry
    else //its a file
    {
      ptr = strrchr(line, ' ');
      ptr++;
      File *file = new File(ptr);
      mainList->insert(file);
    } //else nothing happens
  } // while
} // read

int main(int argc, const char * argv[])
{
  char input[256];
  List<File*>* list = new List<File*>();
  read(argv[1], list);
  list->print();
  /*cout << "Please enter a file name (Done = exit): " << endl;
  cin >> input;
  while (strcmp(input, "Done") != 0)
  {
    File *file = new File(input);
    if (list->find(file))
    {
      //list->curr->data->find(input);
    }
    else
      cout << "Not found" << endl;
    cin >> input;
  }*/
  
  
  return 0;
} // main()
