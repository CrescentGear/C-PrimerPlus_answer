#include <iostream>
#include "stock.h"

using namespace std;

int main()
{
	BankAccount a1= BankAccount("a1", "fad@123", 123);
	BankAccount a2 = BankAccount("a2", "fad@456", 456);
	a1.show();
	a2.show();
	a1.deposit(20);
	a1.show();
	a1.withdraw(66);
	a1.show();
	return 0;
}