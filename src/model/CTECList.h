/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: dbar0540
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include "ArrayNode.h"

template <class Type>
class CTECList
{
private:
	ArrayNode<Type> * end;
	ArrayNode<Type> * head;
	int size;
	void calculateSize();
public:
	CTECList();
	virtual ~CTECList();
	int getSize();
	void addToFront(const Type& value);
	void addToEnd(int index, const Type& value);
	void addToIndex(int index, const Type& value);
	Type getFront();
	Type getEnd();
	Type getFromIndex(int index);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set(int index, const Type& value);
};

#endif /* MODEL_CTECLIST_H_ */
