#include<iostream>
using namespace std;

namespace nm063
{
class Game //has to be polymorphic for RTTI to work
{
public:
	virtual void Collides(Game & game)=0;
	
};
class Ship:public Game{
public:
	void Collides(Game & game);
	
};
class Station:public Game{
	public:
	void Collides(Game & game);
	
};
class Asteroid:public Game{
	public:
	void Collides(Game & game)
	{
		if(typeid(game)==typeid(Ship))
		{
			cout<<"Asteroid Collides with Ship"<<endl;
		}
		else if(typeid(game)==typeid(Station))
		{
			cout<<"Asteroid Collides with Station"<<endl;
		}
		else if(typeid(game)==typeid(Asteroid))
		{
			cout<<"Asteroid Collides with Asteroid"<<endl;
		}
		
	}
};

void Station::Collides(Game & game)
	{
		if(typeid(game)==typeid(Ship))
		{
			cout<<"Station Collides with Ship"<<endl;
		}
		else if(typeid(game)==typeid(Station))
		{
			cout<<"Station Collides with Station"<<endl;
		}
		else if(typeid(game)==typeid(Asteroid))
		{
			cout<<"Station Collides with Asteroid"<<endl;
		}
		
	}

void Ship::Collides(Game & game)
	{
		if(typeid(game)==typeid(Ship))
		{
			cout<<"Ship Collides with Ship"<<endl;
		}
		else if(typeid(game)==typeid(Station))
		{
			cout<<"Ship Collides with Station"<<endl;
		}
		else if(typeid(game)==typeid(Asteroid))
		{
			cout<<"Ship Collides with Asteroid"<<endl;
		}
		
	}

void ProcessCollission(Game & obj1,Game & obj2)
{
		obj1.Collides(obj2);
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