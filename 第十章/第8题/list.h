#pragma warning (disable:4996)
#include <iostream>
#include <string>
#include <new>
#include<iomanip>
typedef int Item ;

class List
{
private:
	Item stuff[50];
public:
	List();
	void log(Item ar[], int n);
	void modify(Item item, int n);
	void IsFull();
	void IsEmpty();
	void visit(void(*pf)(Item & n));
};