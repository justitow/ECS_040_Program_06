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

using namespace std;

int main(int argc, const char * argv[])
{
	List<int>* myList = new List<int>(NULL, NULL);
	ListNode<int>* myNode = new ListNode<int>(NULL, NULL, 0);
	
	return 0;
}
