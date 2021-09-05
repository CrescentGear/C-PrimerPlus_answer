#pragma warning (disable :4996)
#include <string>
const int Len = 40;

class golf
{
private:
	char m_fullname[Len];
	int m_handicap;
public:
	golf(const char* name, int hc);
	golf();
	int setgolf();
	void setgolf(const char* name, int hc);
	void handicap(int hc);
	void showgolf() const;
};