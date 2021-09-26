#include <iostream>
#include <cstring>
using namespace std;
#include "complex0.h"

int main()
{
	Cow a;
	Cow b = { "b","b2",2.0 };
	Cow c;
	c = b;
	a.ShowCow();
	b.ShowCow();
	c.ShowCow();
	return 0;
}