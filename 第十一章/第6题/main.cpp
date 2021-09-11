#include "stonewt.h"

int main()
{
	using namespace std;
	Stonewt s[6] =
	{
		{12,Stonewt::stone_pound},
		{56,45.3,Stonewt::stone_pound},
		{33,Stonewt::stone_pound}
	};
	for (int i=3;i<6;i++)
	{
		double pounds1;
		cin >> pounds1;
		s[i].set(pounds1,Stonewt::stone_pound);
	}
	Stonewt max = s[0];
	Stonewt min = s[0];
	int count=0;
	for (int i=0;i<6;i++)
	{
		cout << s[i];
	}
	for (int i=0;i<6;i++)
	{
		if (s[i]>=11)
		{
			count++;
		}
		if (s[i]>max)
		{
			max = s[i];
		}
		if (s[i]<min)
		{
			min = s[i];
		}
	}
	cout << "max:" << max;
	cout << "min:" << min;
	cout <<"count:"<< count;
	return 0;
}
