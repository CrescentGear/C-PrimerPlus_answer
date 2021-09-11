
#include "complex0.h"
using std::cout;
using std::cin;
using std::endl;

complex::complex()
{
	a = 0;
	b = 0;
}
complex::complex(double a1, double b1)
{
	a = a1;
	b = b1;
}
complex::~complex() {};
complex complex::operator+(const complex T)
{
	return complex(a+T.a,b+T.b);
}
complex complex::operator-(const complex T)
{
	return complex(a - T.a, b - T.b);
}
complex complex:: operator-()
{
	return complex(a  ,-b );
}
complex complex::operator*(const complex T)
{
	return complex(a * T.a- b * T.b, a * T.a + b * T.b);
}
complex complex::operator*(const double n)
{
	return complex(a*n, b*n);
}
complex operator*(const double n, complex T)
{
	return T*n;
}
std::ostream& operator<<(std::ostream& os, const complex T)
{
	os << "("<<T.a<<","<<T.b <<"i)";
	return os;
}
std::istream& operator>>(std::istream& is, complex&T)
{
	cout << "real:";
	if(is >> T.a)
	{ 
		cout << "imaginary:";
		is >> T.b;
	}
	return is;
}