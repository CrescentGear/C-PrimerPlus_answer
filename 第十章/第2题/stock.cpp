#include <iostream>
#include "stock.h"

using std::cout;
using std::endl;
using std::string;

Person::Person(const string& ln, const char* fn)
{
	lname = ln;
	strncpy(fname,fn,24);
	fname[24] = '\0';
}
void Person::Show() const
{
	cout << "first name:" << fname<<"\n";
	cout << "last name:" << lname << "\n";
	cout << endl;
}
void Person::FormalShow() const
{
	cout << "last name:" << lname << "\n";
	cout << "first name:" << fname << "\n";
	cout << endl;
}