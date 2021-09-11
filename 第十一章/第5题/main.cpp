#include "stonewt.h"

int main()
{
	using namespace std;
	Stonewt s1{ 112.5,Stonewt::stone_pound };
	Stonewt s2{ 12,66.3 , Stonewt::floating_pound };
	Stonewt s3;
	Stonewt s4,s5,s6;
	cout << "s1:" << s1;
	cout << "s2:" << s2  ;
	cout << "s3:"<< s3 << endl;
	s3 = s1 + s2;
	s4 = s2 - s1;
	s5 = s1 * 5;
	s6 = 5 *s1;
	cout << "s3:" << s3 ;
	cout << "s4:" << s4 ;
	cout << "s5:" << s5 ;
	cout << "s6:" << s6 << endl;
	return 0;
}
