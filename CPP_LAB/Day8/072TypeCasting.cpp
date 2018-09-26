#include<iostream>
using namespace std;

namespace nm072
{
void main72_1()//intermedieries removed in static cast
{
	short s=100;
	double d=static_cast<double>(s);
}

void ChangeMe(const int* pt)
{
	//if(...)
	int *p=const_cast<int*>(pt);
	*p=777;
}

void main72_2()
{
	int x=100;
	ChangeMe(&x);
	cout<<"x="<<x<<endl;
}

class Animal
{
public:
	virtual void Habitat()
	{
		cout<<"Animals Live in water"<<endl;
	}
};
class Cat:public Animal
{
public:
	void Habitat()
	{
		cout<<"Cat Live in Land"<<endl;
	}
};
class Tiger:public Cat
{
public:
	void Habitat()
	{
		cout<<"Tiger Live in Jungle"<<endl;
	}
};
class Cub:public Tiger
{
public:
	void Habitat()
	{
		cout<<"Cub Live in Caves"<<endl;
	}
};
void main72_3()
{
	//Animal *anm=new Cub();
	Animal *anm=new Cat();


	anm->Habitat();

	Tiger *tiger=dynamic_cast<Tiger*>(anm);
	if(tiger!=NULL)
	tiger->Habitat();
	else
	 cout<<"Casting not done "<<endl;
}



void main()
{
	char *ptr="India is great";
	int *i=reinterpret_cast<int*>(ptr);

	cout<<(char*)i<<endl;

}
}