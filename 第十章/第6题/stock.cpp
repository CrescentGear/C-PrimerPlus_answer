#include <iostream>
#include "stock.h"

using std::cout;
using std::endl;

Move::Move(double a , double b )
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	cout << "x:" << x<<endl;
	cout << "y:" << y<<endl;
	cout << endl;
}

Move Move::add(const Move& m)const
{
	Move temp;
	temp.x = m.x + this->x;
	temp.y = m.y + this->y;
	return temp;
}

void Move::reset(double a , double b )
{
	x = a;
	y = b;
}