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
	List<char*> myList(NULL, NULL);
	
	char* temp = new char;
	strcpy(temp, "test");
	
	ListNode<char*> myNode(NULL, NULL, temp);
	return 0;
}
