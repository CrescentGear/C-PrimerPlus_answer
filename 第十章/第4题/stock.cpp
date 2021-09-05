#include "stock.h"
namespace SALES
{
	Sales::Sales()
	{
		for (int i=0;i< QUARTERS;i++)
		{
			sales[i] = 0.0;
		}
		m_min = 0.0;
		m_max = 0.0;
		m_average = 0.0;
	}
	Sales::Sales(const double ar[], int n)
	{
		double min, max, aver;
		min = ar[0];
		max = ar[0];
		aver = 0.0;
		int i;
		for (i = 0; i < n; i++)
		{
			sales[i] = ar[i];
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
			sales[i] = 0.0;
			i++;
		}
		aver /= n;
		m_min = min;
		m_max = max;
		m_average = aver;
	}

	void Sales::setSales()
	{
		std::cout << "ÇëÊäÈësµÄÖµ£º";
		double min;
		double max;
		double aver;
		double ar[4];
		for (int i = 0; i < 4; i++)
		{
			std::cin >> ar[i];
		}
		*this = Sales(ar, 4);
	}

	void Sales::setSales(const double ar[], int n)
	{
		*this = Sales(ar,n);
	}

	void Sales::showSales()const
	{
		using namespace std;
		cout << "sales:" << endl;
		for (int i = 0; i < 4; i++)
			cout << sales[i] << "\t";
		cout << endl;
		cout << left << setw(20) << "average:" << m_average << endl;
		cout << left << setw(20) << "max:" << setw(20) << m_max << endl;
		cout << left << setw(20) << "min:" << setw(20) << m_min << endl;
	}
}