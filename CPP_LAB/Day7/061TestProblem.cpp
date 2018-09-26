#include<iostream>
using namespace std;
namespace nm061
{
class Ship{
};
class Station{
};
class Asteroid{
};

void ProcessCollission(Ship & obj1,Asteroid & obj2)
{
	cout<<"Ship collides with Asteriod"<<endl;
}
void ProcessCollission(Ship & obj1,Station & obj2)
{
	cout<<"Ship collides with Staion"<<endl;
}

void ProcessCollission(Station & obj1,Asteroid & obj2)
{
	cout<<"Staion collides with Asteriod"<<endl;
}
void ProcessCollission(Asteroid & obj1,Ship & obj2)
{
	ProcessCollission(obj2,obj1);
}
void main()//never change main
{
	Ship sp;
	Station st;
	Asteroid ast;
	ProcessCollission(sp,ast);
	ProcessCollission(sp,st);
	ProcessCollission(st,ast);
	ProcessCollission(ast,sp);
}
}