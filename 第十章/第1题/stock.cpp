#include <iostream>
#include "stock.h"

using std::cout;
using std::endl;
BankAccount::BankAccount(const char* client, const char* num, double bal )
{
	strncpy(name,client,39);
	name[39] = '\0';
	strncpy(acctnum,num,24);
	acctnum[24] = '\0';
	balance = bal;
}

void BankAccount::show(void) const
{
	cout << "name:"<<name<<endl;
	cout << "anntnum:" << acctnum<<endl;
	cout << "balance:" << balance<<endl;
	cout << endl;
}

void BankAccount::deposit(double cash)
{
	balance += cash;
}

void BankAccount::withdraw(double cash)
{
	balance -= cash;
}