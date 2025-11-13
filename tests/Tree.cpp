#include "../include/Tree/BinTree.h"

int main()
{
	string pre = "abdg***eh**i**c*fj***";
	string pre_ = "abdgehicfj";
	string mid = "gdbheiacjf";
	Tree T(pre);
	T.Traverse();
	cout << endl;
	T.Traverse(1);
	cout << endl;
	T.Traverse(2);
	cout << endl;
	Tree T_(pre_, mid);
	T_.Traverse();
	cout << endl;
	T_.Traverse(1);
	cout << endl;
	T_.Traverse(2);
	cout << endl;
}

/*


                a
        b               c
    d         e               f
g           h   i           j

pre:    a b d g e h i c f j
mid:    g d b h e i a c j f
post:   g d h i e b j f c a

abdg***eh**i**c*fj***

abdgehicfj
gdbheiacjf


*/
