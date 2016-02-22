//
//  list.cpp
//  ECS_040_Program_06
//
//  Created by Justin Weich on 2/18/16.
//  Copyright © 2016 Justin Weich. All rights reserved.
//

#include "list.h"
#include "directory.h"

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
List<T>::List(ListNode<T>* first) : head(first), curr(first)
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
void List<T>::insert(ListNode<T>* node)
{
	
}

template class ListNode<File*>;
template class List<File*>;

