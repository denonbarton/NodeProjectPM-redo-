/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: dbar0540
 */

#include "CTECList.h"
#include <assert.h>
using namespace std;

template<class Type>
CTECList<Type> :: CTECList()
{
	this ->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}

template<class Type>
CTECList<Type>::~CTECList()
{
// noting
}

template <class Type>
Type CTECList<Type> :: removeFromFront()
{
	// Check that not removing from an empty list
	assert(this->size > 0);

	//Declare an variable of the type to return
	Type thingToRemove;
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
	//Get what the head is holding!!!
	thingToRemove = this->head->getValue();
	//Delete what head is pointing to
	delete this->head;
	//Set head to the new head
	this->head = newHead;
	this->calculateSize();

	return thingToRemove;
}

template <class Type>
Type CTECList<Type> :: removeFromIndex(int index)
{
	//Check that not removing from an empty list
	assert(this->size > 0);
	//Check that index is in vounds
	assert(index >= 0&& index < size);

	//Declare an variable of the type to return.
	Type thingToRemove;

	//Create refrences
	ArrayNode<Type> * previous, deleteMe, newNext;

	if(index == 0)
	{
		thingToRemove = removeFromFront();
	}
	else if(index == size-1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		for(int spot = 0; spot < index+1; spot++)
		{

		}
	}
}

template<class Type>
Type CTECList<Type> :: removeFromEnd()
{

	/**
	 * Check size is valid
	 * Cate a return variable
	 * Loop intil the next to last node
	 * Grab the value from the last node
	 * Delete the lasnode
	 * set new last node as the end
	 */
	assert(size>0);

	Type returnValue;

	if(size== 1)
	{
		ArrayNode<Type> * toRemove;
		returnValue = removeFromFront();
		end = nullptr;
		head = nullptr;
		delete toRemove;
	}
	else
	{
		ArrayNode<Type> * current =head;
		for(int index = 0; index < size - 1; index++)
		{
			current = current->getNext();
		}
		returnValue = end->getValue();
		delete end;
		current = end;
		current->setNext(nullptr);
	}

	calculateSize();

	return returnValue;
}

template <class Type>
void CTECList<Type> :: calculateSize()
{
	assert(size >= 0);

	int count = 0;
	if(head == nullptr)
	{
		size = count;
	}
	else
	{
		count++;
		ArrayNode<Type> * current = head;
		while(current->getNext() != nullptr)
		{
			count++;
			current = current->getNext();
		}
		size = count;

	}

}


