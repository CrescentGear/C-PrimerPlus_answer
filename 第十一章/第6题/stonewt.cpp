
#include "stonewt.h"
using std::cout;

Stonewt::Stonewt(double lbs,Mode mode1)
{
	stone = int (lbs) / Lbs_per_stn;
	pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
	pounds = lbs;
	mode = mode1;
}

Stonewt::Stonewt(int stn, double lbs, Mode mode1)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = mode1;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
	mode = stone_pound;
}

Stonewt::~Stonewt() {};

void Stonewt::set(double lbs, Mode mode1)
{
	*this = Stonewt(lbs, mode1);
}
void Stonewt::set(int stn, double lbs, Mode mode1)
{
	*this = Stonewt(stn, lbs,  mode1);
}

/*
void Stonewt::show_lbs() const
{
	cout << stone << " stone," << pds_left << " pounds\n";
}

void Stonewt::show_stn() const
{
	cout << pounds << " pounds\n";
}
*/
std::ostream& operator<<(std::ostream& os,  Stonewt T)
{
	if (T.mode == Stonewt::stone_pound)
	{
		os << T.stone << " stone," << T.pds_left << " pounds\n";
	}
	else if (T.mode == Stonewt::integer_pound)
	{
		os << int(T.pounds) << " pounds\n";
	}
	else if (T.mode == Stonewt::floating_pound)
	{
		os << T.pounds << " pounds\n";
	}
	return os;
}
bool Stonewt::operator==(Stonewt T)
{
	return pounds == T.pounds;
}
bool Stonewt::operator>(Stonewt T)
{
	return pounds > T.pounds;
}
bool Stonewt::operator<(Stonewt T)
{
	return pounds < T.pounds;
}
bool Stonewt::operator>=(Stonewt T)
{
	return pounds >= T.pounds;
}
bool operator>=(Stonewt T, double n)
{
	return T.stone >=n;
}
bool Stonewt:: operator<=(Stonewt T)
{
	return pounds <= T.pounds;
}
bool Stonewt::operator!=(Stonewt T)
{
	return pounds != T.pounds;
}
