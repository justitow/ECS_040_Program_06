//
//  list.cpp
//  ECS_040_Program_06
//
//  Created by Justin Weich on 2/18/16.
//  Copyright © 2016 Justin Weich. All rights reserved.
//

#include "list.h"

template <typename T>
ListNode<T>::ListNode(ListNode<T>* back, ListNode<T>* forward): next(back),
prev(forward), data(NULL)
{
}

template <typename T>
ListNode<T>::~ListNode<T>()
{
	delete prev;
	delete next;
	delete &data;
}



template <typename T>
List<T>::List(ListNode<T>* hea, ListNode<T>* cur) : head(hea), curr(cur)
{
}

template <typename T>
List<T>::~List()
{
	delete head;
	delete curr;
}