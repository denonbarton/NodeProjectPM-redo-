/*
 * ArrayNode.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: dbar0540
 */

#include "ArrayNode.h"

template<class Type>
ArrayNode<Type>::ArrayNode() : Node<Type>()
{
	this->next = nullptr;
}
template<class Type>
ArrayNode<Type>::ArrayNode(const Type& value) : Node<Type>(value)
{
	this->value = value;
	this->next = nullptr;
}

template<class Type>
ArrayNode<Type> ::ArrayNode(const Type& value, ArrayNode<Type> * next) : Node<Type>(value)
{
	this->value = value;
	this->next = next;
}

template <class Type>
ArrayNode<Type>::~ArrayNode()
{

}

template<class Type>
void ArrayNode<Type>::setNext(ArrayNode<Type> * next)
{
	this-> next = next;
}

template<class Type>
ArrayNode<Type> * ArrayNode<Type>::getNext()
{
	return this-> next;
}



