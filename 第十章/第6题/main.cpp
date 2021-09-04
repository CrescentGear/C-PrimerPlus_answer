#include <iostream>
#include "stock.h"

using namespace std;

int main()
{
	Move a = Move{ 23.5,96.32 };
	const Move b = Move{45.36,89.65};
	a.showmove();
	b.showmove();
	a=a.add(b);
	a.showmove();
	a.reset(0.0, 0.0);
	a.showmove();
	return 0;
}