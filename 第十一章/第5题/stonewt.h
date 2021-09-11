#pragma warning (disable:4996)
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt
{
public:
	enum Mode{stone_pound,integer_pound, floating_pound};
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
	Mode mode;
public:
	Stonewt(double lbs, Mode mode1);
	Stonewt(int stn, double lbs, Mode mode1);
	Stonewt();
	~Stonewt();
	//void show_lbs() const;
	//void show_stn() const;
	friend std::ostream &operator<<(std::ostream & os, Stonewt T);
	Stonewt operator+(Stonewt T);
	Stonewt operator-(Stonewt T);
	Stonewt operator*(double n);
	friend Stonewt operator*(double n, Stonewt T);
};
#endif 
