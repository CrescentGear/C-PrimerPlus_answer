#pragma warning (disable:4996)
#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>

class complex
{
private:
	double a;
	double b;
public:
	complex();
	complex(double a1, double b1);
	~complex();
	complex operator+(const complex T);
	complex operator-(const complex T);
	complex operator-();
	complex operator*(const complex T);
	complex operator*(const double n);
	friend complex operator*(const double n, complex T);
	friend std::istream& operator>>(std::istream& is, complex&T);
	friend std::ostream& operator<<(std::ostream& os, const complex T);
};
#endif 