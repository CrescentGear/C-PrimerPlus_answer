
#include"list.h"
using namespace std;

void set(Item& n)
{
	n = 100;
}
void show(Item & n)
{
	cout << n << endl;
}

int main()
{
	List L1, L2;
	L1.IsEmpty();
	L2.IsFull();
	Item ar1[5] = {1,2,3,4,5};
	Item a = 5;
	L1.log(ar1,5);
	L2.modify(50,0);
	L1.visit(show);
	cout << endl;
	L2.visit(show);
	cout << endl;
	L1.visit(set);
	L2.visit(set);
	L1.visit(show);
	cout << endl;
	L2.visit(show);
	cout << endl;
	return 0;
}

