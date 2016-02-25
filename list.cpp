//
//  list.cpp
//  ECS_040_Program_06
//


#include "directory.h"
#include <cstring>
#include <iostream>

using namespace std;

template <typename T>
//ListNode<T>::ListNode(ListNode<T>* back, ListNode<T>* forward, const T& input):
              //data(input), next(back), prev(forward)
ListNode<T>::ListNode(ListNode<T> *nxt, const T& input):data(input), next(nxt)
{
} // ListNode()

template <typename T>
ListNode<T>::~ListNode<T>()
{
  delete data;
} // ~ListNode()




template <typename T>
List<T>::List() : head(NULL), curr(head)
//List<T>::List(ListNode<T>* first) : head(first), curr(first)
{
} //List()

template <typename T>
List<T>::~List()
{
  for(ListNode<T> *ptr = head; ptr; ptr = head)
  {
    head = ptr->next;
    delete ptr;
  }
}
/*{

  if (head != NULL)
  {

    for (curr = head; curr->next != NULL; curr = curr->next )
    {

      if (curr->prev != NULL)
        delete curr->prev;
    } // almost done deleting

  } // otherwise, empty object, no reason to delete anything
  
} // ~List()
*/
template <typename T>
bool List<T>::find(T input)
{
  ListNode<T> *ptr;
  
  for (ptr = head; ptr; ptr = ptr->next)
  {
    if((*ptr->data == *input) && (ptr->data->find(input)))
      return true;
  }
  return false;
}
/*
{
  curr = head;

  if (*curr->data == *input)
    return true;
  else // not equal

    if (*curr->data < *input)
    {
      while ((curr->next != NULL) && (*curr->data < *input))
        curr = curr->next;

      if (*curr->data == *input)
        return true;
    } // if
    else // curr->data > *input

      if (*curr->data > *input)
      {
        while ((curr->prev != NULL) && (*curr->data > *input))
          curr = curr->prev;
        if (*curr->data == *input)
          return true;
      } // if
  return false;
} // find()
*/
template <typename T>
void List<T>::insert(T input)
{
  cout << "calling insert" << endl;
  ListNode<T> *ptr, *prev = NULL;
  for (ptr = head; ptr && *ptr->data < *input; ptr = ptr->next)
    prev = ptr;

  if (prev)
  {
    if (*prev->data == *input)
    {
      cout << "calling insert for directory" << endl;
      prev->data->insert(input);
    }
    else
      prev->next = new ListNode<T>(prev, input);
  } // if
    else
      head = new ListNode<T>(prev, input);
}
/*{
  ListNode<T> *ptr, *prev = NULL;
  for(ptr = head, ptr && *ptr->data->getName() < *input; prev = ptr; ptr = ptr->next);
  
}
/*{
  //curr = head;

  if (head == NULL)
  {
    head = new ListNode<T>(NULL, NULL, input);
    curr = head;
  } // head exists
  else
    {
      curr = head;
      while(curr->next != NULL && *curr->next->data < *input)
        curr = curr->next;
      if ((curr->next != NULL) && (*curr->next->data == *input) || 
            *curr->data == *input))
        return;
      if (curr->next != NULL || *curr->data > *input)
      {
        if (curr->prev == NULL)
          {
            head = new ListNode<T>(head, NULL, input);
            head->next->prev = head;
          } // not beggining
        else
        {
          curr->next->prev = new ListNode<T>(curr->next, curr, input);
          curr->next = curr->next->prev;
        } //other things happen
      }
      else
        if (*curr->data < *input)
          curr->next = new ListNode<T>(NULL, curr, input);
          
    } //commenting like this seems like arbitrary bs
} // insert()
*/

template <typename T>
void List<T>::print()
{
  ListNode<T> *ptr;
  
  for (ptr = head; ptr; ptr = ptr->next)
    cout << ptr->data->getName() << endl;
}
/*{

  for (curr = head; curr != NULL; curr= curr->next)
  {
    std::cout << curr->data->getName() << std::endl; //not sure if this compiles
  } // for

} // print()
*/