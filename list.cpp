//
//  list.cpp
//  ECS_040_Program_06
//


#include "directory.h"
#include <cstring>

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
List<T>::List() : head(NULL), curr(NULL)
//List<T>::List(ListNode<T>* first) : head(first), curr(first)
{
} //List()

template <typename T>
List<T>::~List()
{

  if (head != NULL)
  {

    for (curr = head; curr->next != NULL; curr = curr->next )
    {

      if (curr->prev != NULL)
        delete curr->prev;
    } // almost done deleting

  } // otherwise, empty object, no reason to delete anything
  
} // ~List()

template <typename T>
bool List<T>::find(T input)
{
  curr = head;
  if (*curr->data == *input)
    
    return true;
  else
    if (*curr->data < *input)
    {
      while ((curr->next != NULL) && (*curr->data < *input))
        curr = curr->next;
      if (*curr->data == *input)
        return true;
    }
    else
      if (*curr->data > *input)
      {
        while ((curr->prev != NULL) && (*curr->data > *input))
          curr = curr->prev;
        if (*curr->data == *input)
          return true;
      }
  return false;
} // find()

template <typename T>
void List<T>::insert(T input)
{
  ListNode<T> *prev = NULL;
  for (curr = head; curr && *curr->data < *input; prev = curr, curr = curr->next);
  if (*curr->data == *input)
    curr->data->insert(input);
  else
  if (curr)
    {
      prev->next = new ListNode<T>(curr, input);
    }
    else
      head = new ListNode<T>(curr, input);
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

  for (curr = head; curr != NULL; curr= curr->next)
  {
    std::cout << curr->data->getName() << std::endl; //not sure if this compiles
  } // for

} // print()