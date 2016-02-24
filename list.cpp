//
//  list.cpp
//  ECS_040_Program_06
//


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
  if (!head)
  {
    head = new ListNode<T>(NULL, NULL, input);
    curr = head;
  }
  else
    if (*curr->data == *input)
    {
      //do nothing because same name (doesn't insert into list)
    }
    else
      if (*curr->data < *input)
      {
        while ((*curr) && (*curr->data < *input))
          curr = curr->next;
        curr = new ListNode<T>(curr, curr->prev, input);
        curr->prev->next = curr;
        curr->next->prev = curr;
      }
      else
        if (*curr->data > *input)
        {
          while ((*curr) && (*curr->data > *input))
            curr = curr->prev;
          curr = new ListNode<T>(curr->next, curr, input);
          curr->prev->next = curr;
          curr->next->prev = curr;
        }
}

template <typename T>
void List<T>::print()
{
  
}

//template class ListNode<File*>;
//template class List<File*>;

