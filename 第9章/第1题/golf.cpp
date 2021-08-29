#pragma warning (disable :4996)
#include <iostream>
#include "golf.h"
#include <string>

using namespace std;

void setgolf(golf& g, const char* name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf& g)
{
	char name[Len];
	int hc;
	cout << "请输入姓名:";
	cin.get(name, Len);
	cin.ignore(Len, '\n');
	cout << "请输入hc：";
	cin >> hc;
	cin.get();
	if (strcmp(name, " ") == 0)
	{
		return 0;
	}
	else
	{
		strcpy(g.fullname, name);
		g.handicap = hc;
		return 1;
	}
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	cout << "name:" << g.fullname << "\t";
	cout << "handicap:" << g.handicap << endl;
}
