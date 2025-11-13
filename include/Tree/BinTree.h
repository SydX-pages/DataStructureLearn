#ifndef BINTREE_H
#define BINTREE_H

#include <iostream>
#include <string>
using namespace std;
class Node
{
  public:
	char data;
	Node *lchild, *rchild;
};

class Tree
{
	Node *root;
	Node *CreateByPre(string &pre, int &i);
	Node *CreateByPreMid(string &pre, string &mid, int ipre, int imid, int n);
	void Traverse(Node *p, int mode = 0);
	void Free(Node *p);

  public:
	Tree();
	Tree(string &pre);
	Tree(string &pre, string &mid);
	~Tree();
	void Traverse(int mode = 0);
	int Count();
	int Height();
	Node *Search(char e);
	Node *SearchParent(char e);
};

#endif
