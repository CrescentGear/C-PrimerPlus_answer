#include <iostream>
#include "stock.h"

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
			cout << "此为模式2：\n";
			result = in[i].setgolf();
		}
		else
		{
			cout << "此为模式1：\n请输入姓名：";
			cin.get(name, Len);
			cin.clear();
			cin.ignore((numeric_limits<std::streamsize>::max)(), '\n');
			cout << "请输入hc:";
			cin >> hc;
			cin.get();
			in[i].setgolf(name, hc);
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
			in[i].handicap(7);
		}
		in[i].showgolf();
	}
	return 0;
}
//adadadasdadadadasdadadadasdadadadasdadadadasdadadadasdadadadasdadadadasdadadadasdadadadasd