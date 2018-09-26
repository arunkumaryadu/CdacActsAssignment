#include<iostream>
#include<string>
#include<map>
using namespace std;

class IMomento
{
public:
	virtual void Hyderate()=0;
	virtual void DeHyderate()=0;
};

class ICache
{
protected:
	virtual ~ICache()
	{
	}
};

class CareTaker
{
	map<IMomento*,ICache*> repo;
public:
	void RegisterMomento(IMomento *key,ICache* val)
	{
		repo[key]=val;
	}
	ICache * GetMomento(IMomento *key)
	{
		return repo[key];
	}
	operator CareTaker*()
	{
		return this;
	}
};


class ProductInfo:public ICache
{
public:
	string name;
	double price;
};


class MomentoBase:public IMomento
{
protected:
	MomentoBase():care(NULL)
	{
	}
	CareTaker *care;
public:
	void SetCareTaker(CareTaker *care)
	{
		this->care=care;
	}
};

class Product:public MomentoBase
{
	public:
	int _prodId;
	string _name;
	double _price;

Product(int prodId,string name,double price):_prodId(prodId),_name(name),_price(price)
	{

	}
	void Hyderate()
	{
		ProductInfo *pinfo=new ProductInfo();
		pinfo->name=this->_name;
		pinfo->price=this->_price;
		care->RegisterMomento(this,pinfo);
	}
	void DeHyderate()
	{
		ProductInfo *pinfo=dynamic_cast<ProductInfo*>(care->GetMomento(this));
		this->_name=pinfo->name;
		this->_price=pinfo->price;
	}
	friend ostream& operator<<(ostream & os,const Product & prod)
	{
		os<<prod._prodId<<"\t"<<prod._name<<"\t"<<prod._price<<endl;

		return os;
	}
};

class CustomerInfo:public ICache
{
	public:
	string _custName;
	string _status;
};

class Customer:public MomentoBase
{
	public:
	int _custId;
	string _custName;
	string _status;

	Customer(int custId,string custName,string status):_custId(custId),_custName(custName),_status(status)
	{
	}
	void Hyderate()
	{
		CustomerInfo *customer=new CustomerInfo();
		customer->_custName=this->_custName;
		customer->_status=this->_status;
		care->RegisterMomento(this,customer);
	}
	void DeHyderate()
	{
		CustomerInfo *customer=dynamic_cast<CustomerInfo*>(care->GetMomento(this));
		this->_custName=customer->_custName;
		this->_status=customer->_status;
	}
	friend ostream& operator<<(ostream & os,const Customer & cust)
	{
		os<<cust._custId<<"\t"<<cust._custName<<"\t"<<cust._status<<endl;

		return os;
	}
};

void main()
{
	CareTaker careTaker1;
	Product prod1(101,"Nail Paint",50.0);
	Product prod2(102,"Eyebrow polish",150.0);
	Product prod3(103,"Hair straightner",250.0);

	Customer cust1(201,"mickey","active");
	Customer cust2(202,"shivam","inactive");
	cust1.SetCareTaker(careTaker1);
	prod3.SetCareTaker(careTaker1);
	cust1.Hyderate();
	prod3.Hyderate();
	cout<<"_____________Stored Momento__________________"<<endl;
	cout<<prod1<<prod2<<prod3<<cust1<<cust2;

	cust1._custName="Sachin";
	prod3._name="Hair Oil";
	cout<<"_____________________________"<<endl;
	cout<<cust1<<prod3;
	cout<<"_____________Retrieve Momento__________________"<<endl;
	cust1.DeHyderate();
	prod3.DeHyderate();
	cout<<prod1<<prod2<<prod3<<cust1<<cust2;

}