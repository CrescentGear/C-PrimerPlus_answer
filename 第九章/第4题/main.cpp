#pragma warning (disable:4996)
#include <iostream>
#include <string>
#include <new>
#include"headfile_4.h"
using namespace std;
using namespace SALES;

int main()
{
	Sales s1,s2;
	double ar1[2] = {462.3,580.66};
	setSales(s1,ar1,2);
	setSales(s2);
	cout << "s1:"<<endl;
	showSales(s1);
	cout << "s2:" << endl;
	showSales(s2);
	return 0;
}

