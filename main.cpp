//
//  main.cpp
//  ECS_040_Program_06
//
//  Created by Justin Weich on 2/18/16.
//  Copyright © 2016 Justin Weich. All rights reserved.
//

#include "list.h"
#include "list.cpp"
#include "directory.h"

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[])
{
  File* file = new File("hello");
	ListNode<File*> myNode(NULL, NULL, file);
  Directory myDirectory("hello");
	return 0;
}
