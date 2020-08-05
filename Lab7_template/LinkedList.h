#pragma once
#include<iostream>
using namespace std;

struct ListNode
{
	int val;
	ListNode* next;
	ListNode* pre;
	ListNode() : val(0), next(NULL),pre(NULL) {};
	ListNode(int x) : val(x), next(NULL),pre(NULL) {};
};

class LinkedList
{

public:
	LinkedList();
	void Push_back(int x);
	void Push_front(int x);
	void Insert(int index,int x);
	void Delete(int index);
	void Reverse();
	void Print();
	~LinkedList();

private:
	ListNode* Head;
	ListNode* Tail;
};