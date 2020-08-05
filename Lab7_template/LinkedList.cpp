//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include"LinkedList.h"
using namespace std;

LinkedList::LinkedList()
{
	//Constructor
	Head = NULL;
	Tail = NULL;
}

void LinkedList::Push_back(int x)
{
	//TODO : Insert a node to the end of the linked list, the node's value is x.
	ListNode* node = new ListNode;
	node->val = x;
	if(Tail == NULL){
		Head = node;
		Tail = node;
	}else{
		Tail->next = node;
		node->pre = Tail;
		Tail = node;
	}
}
void LinkedList::Push_front(int x)
{
	//TODO : Insert a node to the front of the linked list, the node's value is x.
	ListNode* node = new ListNode;
	node->val = x;
	if(Head == NULL){
		Head = node;
		Tail = node;
	}else{
		Head->pre = node;
		node->next = Head;
		Head = node;
	}
}

void LinkedList::Insert(int index,int x)
{
	//TODO : Insert a node to the linked list at position "index", the node's value is x.
	//The index of the first node in the linked list is 0.
	ListNode* node = new ListNode;
	node->val = x;
	ListNode* now = Head;
	for(int i=0;i<index;i++) {now = now->next; }
	if(now == NULL){
		Push_back(x);
	}else if(now == Head){
		Push_front(x);
	}	
	else{
		node->next = now;
		node->pre = now->pre;
		now->pre->next = node;
		now->pre = node;
	}
}

void LinkedList::Delete(int index)
{
	//TODO : Remove the node with index "index" in the linked list.
	ListNode* now = Head;
	for(int i=0;i<index;i++) now = now->next;
	if(now == Tail && now == Head){
		delete now;
	}else if(now == Tail){
		Tail = now->pre;
		delete Tail->next;
		Tail->next = NULL;
	}else if(now == Head){
		Head = now->next;
		delete Head->pre;
		Head->pre = NULL;
	}else{
		now->pre->next = now->next;
		now->next->pre = now->pre;
		delete now;
	}
	
}

void LinkedList::Reverse()
{
	//TODO : Reverse the linked list.
	
	ListNode* n1 = Head;
	for(;n1 != NULL; n1 = n1->pre){
		ListNode* tmp = n1->pre;
		n1->pre = n1->next;
		n1->next = tmp;
	}
	ListNode* tmp = Head;
	Head = Tail;
	Tail = tmp;

}

void LinkedList::Print()
{
	cout << "List: ";
	ListNode* node = Head;
	for( ;node != NULL; node = node->next){
		cout<<node->val<<" ";
	}
	cout<<endl;
	//TODO : Print all the elements in the linked list in order.
}

LinkedList::~LinkedList()
{
	//Destructor
	ListNode* n1 = Head;
	ListNode* n2 = Head->next;
	for(;n2 != NULL;){
		delete n1;
		n2 = n2 -> next;
		n1 = n2;
	}
	delete n1;
}
