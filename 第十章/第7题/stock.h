#pragma warning (disable:4996)
#include <iostream>
#include <string>
#include <new>
#include<iomanip>

	class Plorg
	{
	private:
		char name[20];
		int ci;
	public:
		Plorg();
		void setplorg(int n,const char* iname = "Plorga");
		void setci(int n);
		void show();
	};
