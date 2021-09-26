
#include "complex0.h"
using std::cout;
using std::cin;
using std::endl;

Cow::Cow()
{
	name[19] = '\0';
	hobby = new char[20];
	hobby[0] = '\0';
	weight=0.0;
}
Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy(name, nm);
	int length = strlen(ho);
	hobby = new char[length + 1];
	strcpy(hobby, ho);
	weight = wt;
}
Cow::Cow(const Cow& c)
{
	strcpy(name, c.name);
	int length = strlen(c.hobby);
	hobby = new char[length+1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}
Cow::~Cow()
{

}
Cow& Cow::operator=(const Cow& c)
{
	strcpy(name, c.name);
	strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
}
void Cow::ShowCow() const
{
	cout << "name:" << name << endl;
	cout << "hobby:" << hobby << endl;
	cout << "weight:" << weight << endl;
}