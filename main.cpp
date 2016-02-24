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
  char line[256], *ptr;

  while (file.getline(line, 256))
  {
  	ptr = line;

  	if (*ptr == 'd')
  	  {
  	    ptr = strrchr(line, ' ');
  	    ptr++;
  	  	//create new Directory with *ptr
  	  	//insert new Directory
  	  } // otherwise, its not a direcotry
  	else //its a file
  	  {
  	  	ptr = strrchr(line, ' ');
  	  	ptr++;
        //create new File with *ptr
        //insert new File
  	  } //else nothing happens
  } // while
} // read

int main(int argc, const char * argv[])
{
  File* file = new File("hello.txt");
	ListNode<File*> myNode(NULL, NULL, file);
	List<File*> myList();
	myList.insert(myNode);
	myList.print();
  Directory myDirectory("folder");
  
  cout << "Hello?" << endl;
	return 0;
} // main()
