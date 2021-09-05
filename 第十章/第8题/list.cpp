#include "list.h"
using namespace std;

List::List()
{
	for (int i=0;i<50;i++)
	{
		stuff[i] = -5;
	}
}

void List::log(Item ar[],int n)
{
	for (int i=0;i<n;i++)
	{
		stuff[i] = ar[i];
	}
}

void List::modify(Item item,int n)
{
	stuff[n] = item;
}

void List::IsFull()
{
	if (stuff[49] != -5)
		cout << "Full" << endl<<endl;
	else
		cout << "not Full" << endl << endl;
}

void List::IsEmpty()
{
	if (stuff[0] == -5)
		cout << "Empty" << endl << endl;
	else
		cout << "not Empty" << endl << endl;
}
void List::visit(void(*pf)(Item& n))
{
	int i;
	for ( i=0;i<50;i++)
	{
		if (stuff[i]==-5)
		{
			break;
		}
	}
	for (int j=0;j<i;j++)
	{
		(*pf)(stuff[j]);
	}
}