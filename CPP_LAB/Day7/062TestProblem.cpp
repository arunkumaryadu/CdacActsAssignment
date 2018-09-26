#include<iostream>
using namespace std;
namespace nm062
{
class Game //has to be polymorphic for RTTI to work
{
public:
	virtual ~Game()
	{
	}
};
class Ship:public Game{
};
class Station:public Game{
};
class Asteroid:public Game{
};

void ProcessCollission(Game & obj1,Game & obj2)
{
	//cout<<typeid(g1).name()<<" coliides with "<<typeid(g2).name()<<endl;	
	if(typeid(obj1)==typeid(Ship) && typeid(obj2)==typeid(Asteroid))//RTTI
	{
		cout<<"Ship collides with Asteriod"<<endl;
	}
	else if(typeid(obj1)==typeid(Ship) && typeid(obj2)==typeid(Station))
	{
		cout<<"Ship collides with Staion"<<endl;
	}
	else if(typeid(obj1)==typeid(Station) && typeid(obj2)==typeid(Asteroid))
	{
		cout<<"Staion collides with Asteriod"<<endl;
	}
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
