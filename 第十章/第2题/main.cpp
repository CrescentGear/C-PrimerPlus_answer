#include <iostream>
#include "stock.h"

using namespace std;

int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy","Sam");
	two.Show();
	cout << endl;
	two.FormalShow();
	return 0;
}