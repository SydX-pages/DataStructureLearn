#ifndef SEQLIST_H
#define SEQLIST_H

#include <iostream>
using namespace std;
class SList
{
	int data[100];
	int length;

  public:
	SList();
	SList(int a[100], int n);
	void Output();
	int Length();
	int Locate(int toLoc);
	int Get(int pos);
	void Insert();
	int Delete(int pos);
};

#endif
