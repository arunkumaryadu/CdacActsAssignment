#include<iostream>
using namespace std;
namespace nm064
{
//To be solved in DS
class Game //has to be polymorphic for RTTI to work
{
public:
	virtual void Collides(Game & game)=0;
	virtual void Collided()=0;
};
class Ship:public Game{
public:
	void Collides(Game & game)
	{
		cout<<"Ship Collides with ";
		game.Collided();
	}
	void Collided()
	{
		cout<<"Ship"<<endl;
	}
};
class Station:public Game{
	public:
	void Collides(Game & game)
	{
		cout<<"Station Collides with ";
		game.Collided();
	}
	void Collided()
	{
		cout<<"Station"<<endl;
	}
	
};
class Asteroid:public Game{
	public:
	void Collides(Game & game)
	{
		cout<<"Asteroid Collides with ";
		game.Collided();
	}
	void Collided()
	{
		cout<<"Asteroid"<<endl;
	}
};

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
