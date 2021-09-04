#include <iostream>
#include "stock.h"

using namespace std;

int main()
{
	int total=0;
	Stack S;
	customer temp = {"name1",10};
	S.push(temp);
	temp = { "name2",456 };
	S.push(temp);
	S.pop(temp);
	total += temp.payment;
	cout << temp.fullname << "\t" << total << endl;
	S.pop(temp);
	total += temp.payment;
	cout << temp.fullname<<"\t"<<total<<endl;
	return 0;
}