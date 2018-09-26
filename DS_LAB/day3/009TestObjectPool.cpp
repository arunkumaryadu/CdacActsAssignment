#include<iostream>
#include<string>
using namespace std;
class Dummy
{
}dummy;
class ObjectPool
{
	static ObjectPool *head;
	ObjectPool *next;
	int id;
protected:
	
	ObjectPool()
	{
	}
	ObjectPool(Dummy& d,int id):id(id)
	{
		next=head;
		head=this;
	}
	virtual ObjectPool* clone()=0;
public:
	int GetId()
	{
		return id;
	}
	static ObjectPool* ObjectFromPool(int id)
	{
		ObjectPool *temp=NULL;
		for(ObjectPool *trav=head;trav!=NULL;trav=trav->next)
		{
			if(id==trav->GetId())
				return trav->clone();
		}
		return temp;
	}
};
ObjectPool * ObjectPool::head=NULL;

class Currency:public ObjectPool
{
	double rate;
public:
	Currency(Dummy & d):ObjectPool(d,100)
	{
		rate=71.2;//from service
	}
	Currency(const Currency & par):rate(par.rate)
	{
	}
	ObjectPool* clone()
	{
		return new Currency(*this);
	}
	void DisplayCurrency()
	{
		cout<<"Rate="<<rate<<endl;
	}
};

class Weather:public ObjectPool
{
	double humidity;
public:
	Weather(Dummy & d):ObjectPool(d,200)
	{
		humidity=26.2;//from service
	}
	Weather(const Weather & par):humidity(par.humidity)
	{
	}

	ObjectPool* clone()
	{
		return new Weather(*this);
	}
	void DisplayWeather()
	{
		cout<<"Humidity="<<humidity<<endl;
	}
};

class Providers:public ObjectPool
{
	string name;
public:
	Providers(Dummy & d):ObjectPool(d,300)
	{
		name="BSNL";//from service
	}
	Providers(const Providers & par):name(par.name)
	{
	}
	ObjectPool* clone()
	{
		return new Providers(*this);
	}
	void DisplayProviders()
	{
		cout<<"Name="<<name<<endl;
	}
};

void CreatePool()
{
	new Providers(dummy);
	new Weather(dummy);
	new Currency(dummy);
}
void main()
{
	CreatePool();

	Currency * curr=dynamic_cast<Currency*>(ObjectPool::ObjectFromPool(100));
	if(curr!=NULL)
		curr->DisplayCurrency();
	cout<<"__________________________"<<endl;
	Weather * wtr=dynamic_cast<Weather*>(ObjectPool::ObjectFromPool(200));
	if(wtr!=NULL)
		wtr->DisplayWeather();
}