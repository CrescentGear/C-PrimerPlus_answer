
#include"stock.h"
using namespace std;
using namespace SALES;
int main()
{
	Sales s1, s2;
	double ar1[2] = { 462.3,580.66 };
	s1.setSales(ar1, 2);
	s2.setSales();
	cout << "s1:" << endl;
	s1.showSales();
	cout << "s2:" << endl;
	s2.showSales();
	return 0;
}

