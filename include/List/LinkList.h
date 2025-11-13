#ifndef LINKLIST_H
#define LINKLIST_H

#include <iostream>
using namespace std;
class LListNode
{
  public:
	int data;
	LListNode *next;
};
class LList
{
	LListNode *head;

  public:
	LList();
	LList(int a[100], int n);
	~LList();
	void Output();
	int Length();
	int Locate(int toLoc);
	int Get(int pos);
	void Insert(int pos, int data);
	int Delete(int pos);
};

#endif
