//
//  list.hpp
//  ECS_040_Program_06
//
//  Created by Justin Weich on 2/18/16.
//  Copyright © 2016 Justin Weich. All rights reserved.
//

#ifndef list_h
#define list_h

#include <iostream>
using namespace std;

template <class T>
class ListNode
{
private:
  ListNode<T>* prev;
  ListNode<T>* next;
  ListNode(ListNode<T>* back, ListNode<T>* forward);
  ~ListNode();
public:
};

#endif