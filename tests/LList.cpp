#include "../include/List/LinkList.h"

int main()
{
	int a[5] = {11, 22, 33, 44, 55};
	LList L(a, 5);
	L.Output();
	cout << L.Length() << endl
	     << L.Locate(44) << endl
	     << L.Locate(66) << endl
	     << L.Get(2) << endl;
	L.Insert(3, 40);
	L.Output();
	L.Insert(6, 100);
	L.Output();
	L.Insert(0, 1);
	L.Output();
	L.Insert(100, 11);
	return 0;
}
