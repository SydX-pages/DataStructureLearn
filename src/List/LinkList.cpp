#include "../../include/List/LinkList.h"

LList::LList() : head(NULL) {}
LList::LList(int a[100], int n)
{
	head = new LListNode();
	LListNode *rear = head;
	for (int i = 0; i < n; i++)
	{
		LListNode *s = new LListNode();
		s->data = a[i];
		rear->next = s;
		rear = s;
	}
	rear->next = NULL;
}
LList::~LList()
{
	for (LListNode *p = head; p;)
	{
		LListNode *q = p;
		p = p->next;
		delete q;
	}
	head = NULL;
}
void LList::Output()
{
	for (LListNode *p = head->next; p; p = p->next)
		cout << p->data << " ";
	cout << endl;
}
int LList::Length()
{
	int cnt = 0;
	for (LListNode *p = head->next; p; p = p->next, cnt++)
		;
	return cnt;
}
int LList::Locate(int toLoc)
{
	int cnt = 0;
	for (LListNode *p = head->next; p; p = p->next, cnt++)
		if (p->data == toLoc)
			return cnt;
	return -1;
}
int LList::Get(int pos)
{
	int cnt = 0;
	for (LListNode *p = head->next; p; p = p->next, cnt++)
		if (cnt == pos)
			return p->data;
	return -1;
}
void LList::Insert(int pos, int data)
{

	int cnt = 0;
	LListNode *p = head->next;
	for (p = head; p && cnt < pos; p = p->next, cnt++)
		;
	if (cnt < pos)
	{
		cout << "Not That Long" << endl;
		return;
	}
	LListNode *s = new LListNode();
	s->data = data;
	s->next = p->next;
	p->next = s;
}
