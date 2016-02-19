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

template <typename T>
class ListNode
{
private:
  T data;
  ListNode<T>* prev;
  ListNode<T>* next;
public:
  ListNode<T>(ListNode<T>* back, ListNode<T>* forward);
  ~ListNode<T>();
};

template <typename T>
class List
{
private:
  ListNode<T>* head;
  ListNode<T>* curr;
public:
  List<T>(ListNode<T>* first, ListNode<T>* second);
  ~List<T>();
  void setData(const T& value);

};


#endif
