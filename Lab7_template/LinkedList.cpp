//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include"LinkedList.h"

LinkedList::LinkedList()
{
	//Constructor
	Head = NULL;
}

void LinkedList::Push_back(int x)
{
	//TODO : Insert a node to the end of the linked list, the node's value is x.
}

void LinkedList::Push_front(int x)
{
	//TODO : Insert a node to the front of the linked list, the node's value is x.
}

void LinkedList::Insert(int index,int x)
{
	//TODO : Insert a node to the linked list at position "index", the node's value is x.
	//The index of the first node in the linked list is 0.
}

void LinkedList::Delete(int index)
{
	//TODO : Remove the node with index "index" in the linked list.
}

void LinkedList::Reverse()
{
	//TODO : Reverse the linked list.
}

void LinkedList::Print()
{
	cout << "List: ";
	//TODO : Print all the elements in the linked list in order.
}

LinkedList::~LinkedList()
{
	//Destructor
}
