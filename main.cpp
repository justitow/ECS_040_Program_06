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
  char line[1024];
  char* ptr;
  while (file.getline(line, 1024))
  {
    ptr = line;
    
    if (*ptr == 'd')
    {
      ptr = strrchr(line, ' ');
      ptr++;
      cout << ptr << endl;
      Directory *directory = new Directory(ptr);
      mainList->insert(directory);
      cout << "inserted directory" << endl;
    } // otherwise, its not a direcotry
    else //its a file
    {
      ptr = strrchr(line, ' ');
      ptr++;
      cout << ptr << endl;
      File *file = new File(ptr);
      mainList->insert(file);
      cout << "inserted file" << endl;
    } //else nothing happens
  } // while
} // read

int main(int argc, const char * argv[])
{
  char input[256];
  List<File*>* list = new List<File*>();
  cout << "reading list" << endl;
  read(argv[1], list);
  cout << "done reading list, now printing" << endl;
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
