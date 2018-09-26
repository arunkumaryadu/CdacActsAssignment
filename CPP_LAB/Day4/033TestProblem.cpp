#include<iostream>
using namespace std;
namespace nm033
{
class Rect;

class Polar
{
	double angle;
	double dist;
public:
	Polar():angle(0.0),dist(0.0)
	{
	}
	operator Rect();
};
class Rect
{
	double x;
	double y;
public:
	Rect():x(0.0),y(0.0)
	{
	}
	Rect& operator=(Polar & polar)
	{
		x=1.2;
		y=4.5;
		return *this;
	}
	operator Polar()
	{
		Polar temp;
		return temp;
	}
};

	Polar::operator Rect()
	{
		Rect temp;

		return temp;
	}

void main()
{
	Polar p;
	Rect r;

	p=r;
	r=p;

	Polar p1=r;
	Rect r1=p;
}
}