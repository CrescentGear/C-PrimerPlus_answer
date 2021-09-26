#pragma warning (disable:4996)
#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
#include <string>


class Cow {
	char name[20];
	char* hobby;
	double weight;
public:
	Cow();
	Cow(const char* nm, const char* ho, double wt);
	Cow(const Cow & c);
	~Cow();
	Cow& operator=(const Cow& c);
	void ShowCow() const;
};
#endif 