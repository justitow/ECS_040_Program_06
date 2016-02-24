//
//  list.hpp
//  ECS_040_Program_06
//


#ifndef list_h
#define list_h

#include <iostream>

template <typename T>
class List;

template <typename T>
class ListNode
{
private:
  T data;
  ListNode<T>* next;
  ListNode<T>* prev;
public:
  ListNode<T>(ListNode<T>* back, ListNode<T>* forward, const T& input);
  ~ListNode<T>();
  friend class List<T>;
}; // ListNode class

template <typename T>
class List
{
private:
  ListNode<T>* head;
  ListNode<T>* curr;
public:
  List<T>();//(ListNode<T>* first);
  ~List<T>();
  bool find(char*);
  void insert(T input);
  void print();
}; // List class

#include "list.cpp"

#endif
