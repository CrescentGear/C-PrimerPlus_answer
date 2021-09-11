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
	void set(double lbs, Mode mode1);
	void set(int stn, double lbs, Mode mode1);
	friend std::ostream &operator<<(std::ostream & os, Stonewt T);
	bool operator==(Stonewt T);
	bool operator>(Stonewt T);
	bool operator<(Stonewt T);
	bool operator>=(Stonewt T);
	friend bool operator>=(Stonewt T,double n);
	bool operator<=(Stonewt T);
	bool operator!=(Stonewt T);
};
#endif 
