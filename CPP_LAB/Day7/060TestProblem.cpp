#include<iostream>
using namespace std;
namespace nm060
{
class Ship{
};
class Station{
};
class Asteroid{
};
//(Not Accepted)
template<typename T1,typename T2>
void ProcessCollission(T1 obj1,T2 obj2) //process collission generated for every combination
{
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
}
}