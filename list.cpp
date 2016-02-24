//
//  list.cpp
//  ECS_040_Program_06
//


#include "list.h"
#include "directory.h"
#include <cctype>
#include <cstring>

template <typename T>
ListNode<T>::ListNode(ListNode<T>* back, ListNode<T>* forward, const T& input):
								data(input), next(back), prev(forward)
{
}

template <typename T>
ListNode<T>::~ListNode<T>()
{
	delete prev;
	delete next;
    delete data;
}




template <typename T>
List<T>::List() : head(NULL), curr(NULL)
//List<T>::List(ListNode<T>* first) : head(first), curr(first)
{
}

template <typename T>
List<T>::~List()
{
	if (head != NULL)
	{
		for (curr = head; curr->next != NULL; curr = curr->next )
		{
			if (curr->prev != NULL)
				delete curr->prev;
		}
		if (curr != NULL)
			delete curr;
	}
	
}

template <typename T>
bool List<T>::find(char*)
{
  
}

template <typename T>
void List<T>::insert(T input)
{
  ListNode<T> *ptr, *prev = NULL; // no extra credit if these are used :(
  if (!head)
  {
    head = new ListNode<T>(NULL, NULL, input);
    curr = head;
  }
  else
    if (*curr->data == *input)
    {
      //do nothing because same name
    }
    else
      if (*curr->data < *input)
      {
        //insert before
      }
      else
        if (*curr->data > *input)
        {
       //insert after
        }
}

template <typename T>
void List<T>::print()
{
  
}

template class ListNode<File*>;
template class List<File*>;

