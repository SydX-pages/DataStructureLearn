#include "../../include/Tree/BinTree.h"

Tree::Tree() : root(NULL) {}

Tree::Tree(string &pre)
{
	int i = 0;
	root = CreateByPre(pre, i);
}
Node *Tree::CreateByPre(string &pre, int &i)
{
	if (i >= pre.length())
		return NULL;
	char c = pre[i++];
	if (c == '*')
		return NULL;
	Node *s = new Node;
	s->data = c;
	s->lchild = CreateByPre(pre, i);
	s->rchild = CreateByPre(pre, i);
	return s;
}

Tree::Tree(string &pre, string &mid) { root = CreateByPreMid(pre, mid, 0, 0, pre.length()); }
Node *Tree::CreateByPreMid(string &pre, string &mid, int ipre, int imid, int n)
{
	if (n == 0)
		return NULL;
	Node *s = new Node;
	s->data = pre[ipre];
	int i = 0;
	for (i = 0; i < n; i++)
		if (pre[ipre] == mid[imid + i])
			break;
	s->lchild = CreateByPreMid(pre, mid, ipre + 1, imid, i);
	s->rchild = CreateByPreMid(pre, mid, ipre + i + 1, imid + i + 1, n - i - 1);
	return s;
}

void Tree::Traverse(int mode) { Traverse(root, mode); }
void Tree::Traverse(Node *p, int mode)
{
	if (!p)
		return;
	switch (mode)
	{
	case 0: // Pre
		cout << p->data << " ";
		Traverse(p->lchild);
		Traverse(p->rchild);
		break;
	case 1: // Mid
		Traverse(p->lchild, 1);
		cout << p->data << " ";
		Traverse(p->rchild, 1);
		break;
	case 2: // Post
		Traverse(p->lchild, 2);
		Traverse(p->rchild, 2);
		cout << p->data << " ";
		break;
	default:
		break;
	}
}

Tree::~Tree() { Free(root); }
void Tree::Free(Node *p)
{
	if (!p)
		return;
	Free(p->lchild);
	Free(p->rchild);
	delete p;
}
