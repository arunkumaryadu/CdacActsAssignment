#include<iostream>
using namespace std;

class Circle
{
public:
	virtual void CircleArea()
	{
		cout<<"CircleArea"<<endl;
	}
	virtual void CircleDiameter()
	{
		cout<<"CircleDiameter"<<endl;
	}
};
class Rectangle
{
public:
	virtual void RectangleArea()
	{
		cout<<"RectangleArea"<<endl;
	}
	virtual void RectanlePerimeter()
	{
		cout<<"RectanlePerimeter"<<endl;
	}
};
class Shape:public Circle,public Rectangle
{
public:

};
void main()
{
	Shape sp;
	Circle *circle=&sp;
	circle->CircleArea();
	circle->CircleDiameter();
	cout<<"___________________________"<<endl;
	Rectangle *rect=(Rectangle*)circle;
	//Rectangle *rect=(Rectangle*)(Shape*)circle;
	//Rectangle *rect=(Shape*)circle;
	//Rectangle *rect=dynamic_cast<Rectangle*>(circle);
	rect->RectangleArea();
	rect->RectanlePerimeter();
}