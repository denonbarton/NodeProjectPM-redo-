/*
 * Node.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: dbar0540
 */

#include <iostream>
#include "node.h"

//using namespace std;
template<class Type>
Node<Type>::Node()
{
	this->pointers = nullptr;
}

template <class Type>
Node<Type>::Node(const Type& value)
{
	this->value = 0;
	pointers = nullptr;
}

template <class Type>
Node<Type>::~Node()
{
	// TODO Auto-Generated destructor stub
}

template<class Type>
Type Node<Type> :: getValue()
{
	return this-> value;
}

template <class Type>
void Node<Type> :: setValue(const Type& value)
{
	this->value = value;
}

template <class Type>
Node<Type>* Node<Type> :: getPointers()
{
	return this->pointers;
}


