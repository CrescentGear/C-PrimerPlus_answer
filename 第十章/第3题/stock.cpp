#pragma warning (disable :4996)
#include <iostream>
#include "stock.h"
#include <string>

using namespace std;

golf::golf(const char* name, int hc)
{
	strcpy(m_fullname, name);
	m_fullname[39] = '\0';
	m_handicap = hc;
}

golf::golf()
{
	strcpy(m_fullname, " ");
	m_handicap = -1;
}

void golf::setgolf(const char* name, int hc)
{
	strcpy(m_fullname, name);
	m_fullname[39] = '\0';
	m_handicap = hc;
}

int golf::setgolf()
{
	char name[Len];
	int hc;
	cout << "ÇëÊäÈëÐÕÃû:";
	cin.get(name, Len);
	cin.clear();
	cin.ignore((numeric_limits<std::streamsize>::max)(), '\n');
	cout << "ÇëÊäÈëhc£º";
	cin >> hc;
	cin.get();
	if (strcmp(name, " ") == 0)
	{
		return 0;
	}
	else
	{
		*this = golf(name, hc);
		return 1;
	}
}

void golf::handicap(int hc)
{
	m_handicap = hc;
}

void golf::showgolf() const
{
	cout << "name:" << m_fullname << "\t";
	cout << "handicap:" << m_handicap << endl;
}