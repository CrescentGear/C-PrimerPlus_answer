#include "headfile_4.h"
#include <iostream>
#include<iomanip>

namespace SALES
{
	void setSales(Sales& s, const double ar[], int n)
	{
		double min, max, aver;
		min = ar[0];
		max = ar[0];
		aver = 0.0;
		int i;
		for (i = 0; i < n; i++)
		{
			s.sales[i] = ar[i];
			if (min > ar[i])
			{
				min = ar[i];
			}
			if (max < ar[i])
			{
				max = ar[i];
			}
			aver += ar[i];
		}
		while (i < QUARTERS)
		{
			s.sales[i] = 0.0;
			i++;
		}
		aver /= n;
		s.min = min;
		s.max = max;
		s.average = aver;
	}
	void setSales(Sales& s)
	{
		std::cout << "ÇëÊäÈësµÄÖµ£º";
		double min;
		double max;
		double aver;
		double n;
		for (int i = 0; i < 4; i++)
		{
			std::cin >> n;
			if (i == 0)
			{
				min = n;
				max = n;
				aver = 0.0;
			}
			else
			{
				if (min > n)
				{
					min = n;
				}
				if (max < n)
				{
					max = n;
				}
			}
			s.sales[i] = n;
			aver += n;
		}
		aver /= 4;
		s.average = aver;
		s.max = max;
		s.min = min;
	}
	void showSales(const Sales& s)
	{
		using namespace std;
		cout << "s.sales:" << endl;
		for (int i = 0; i < 4; i++)
			cout << s.sales[i] << "\t";
		cout << endl;
		cout << left << setw(20) << "s.average:" << s.average << endl;
		cout << left << setw(20) << "s.max:" << setw(20) << s.max << endl;
		cout << left << setw(20) << "s.min:" << setw(20) << s.min << endl;
	}
}