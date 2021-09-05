#include "stock.h"
using namespace std;
Plorg::Plorg()
{
	cin >> name;
	ci = 50;
}

void Plorg::setplorg(int n, const char*iname)
{
	strcpy(name,iname);
	ci = n;
}

void Plorg::setci(int n)
{
	ci = n;
}

void Plorg::show()
{
	cout << "name:"<<name<<endl;
	cout << "ci:" << ci << endl;
	cout << endl;
}
