#pragma warning (disable:4996)
#include <iostream>
#include <string>
#include <new>
#include<iomanip>
namespace SALES
{ 
	class Sales
	{
	private:
		static const int QUARTERS = 4;
		double sales[QUARTERS];
		double m_average;
		double m_max;
		double m_min;
	public:
		Sales(const double ar[], int n);
		Sales();
		void setSales(const double ar[], int n);
		void setSales();
		void showSales()const;
	};
}