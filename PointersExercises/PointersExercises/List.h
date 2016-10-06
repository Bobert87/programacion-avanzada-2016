#pragma once

struct node
{
	int value;
	node* next;
};

void add(int x)
{
	node newNode;
	newNode.value = x;
	newNode.next = NULL;
	node* t = head; //Fix with constructor
	while (t -> next != NULL)
	{
		T = T.next;
	}
	T.next = & newNode;


}

class List
{
public:
	List();
	node head;
	~List();
};

