#include <iostream>
#include "golf.h"

int main()
{
	using namespace std;
	golf in[5];

	for (int i = 0; i < 5; i++)
	{
		char name[Len];
		int hc;
		int result = 1;
		if (i % 2 == 0)
		{
			cout << "��Ϊģʽ2��\n";
			result = setgolf(in[i]);
		}
		else
		{
			cout << "��Ϊģʽ1��\n������������";
			cin.get(name, Len);
			cin.ignore(Len, '\n');
			cout << "������hc:";
			cin >> hc;
			cin.get();
			setgolf(in[i], name, hc);
			if (strcmp(name, " ") == 0)
			{
				result = 0;
			}
		}
		if (result == 0)
		{
			break;
		}
		if (i == 3)
		{
			handicap(in[i], 7);
		}
		showgolf(in[i]);
	}
	return 0;
}
