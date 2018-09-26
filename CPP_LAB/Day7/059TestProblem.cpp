#include<iostream>
using namespace std;
namespace nm059
{
class Rect;//forward declaration
class Polar
{
	double distance;
	double angle;
public:
	Polar(double distance,double angle):distance(distance),angle(angle)
	{
	}
	operator double()
	{
		return distance;
	}
	double getDistance()
	{
		return distance;
	}
	double getAngle()
	{
		return angle;
	}
	friend ostream& operator<<(ostream & os,Polar & ob)
	{
		os<<ob.distance<<" "<<ob.angle<<endl;
		return os;
	}
	operator Rect();
};

class Rect
{
	double x;
	double y;
public:
	Rect(double x,double y):x(x),y(y)
	{
	}
	operator double()
	{
		return x+y;
	}
	operator Polar()
	{
		return Polar(x,y);
	}
	Rect& operator=(Polar & p)
	{
		return Rect(p.getDistance(),p.getAngle());
	}
	friend ostream& operator<<(ostream & os,Rect & ob)
	{
		os<<ob.x<<" "<<ob.y<<endl;
		return os;
	}
};

Polar::operator Rect()
{
	return Rect(distance,angle);
}

void main()//never change main
{
	Polar p(4.0,45.0);
	Rect r(3.0,4.0);
	double d1=p;//should return the distance
	double d2=r;//should return (xcor + ycor);
	p=r; 
	r=p;
	Polar p1=r;
	Rect r1=p;
	cout<<"d1="<<d1<<endl;
	cout<<"d2="<<d2<<endl;
	cout<<p<<endl;
	cout<<r<<endl;
	cout<<p1<<endl;
	cout<<r1<<endl;
}
}