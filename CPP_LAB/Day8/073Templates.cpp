#include<iostream>
using namespace std;

class CA
{
public:
	CA()
	{
		cout<<"CA Ctor   at "<<this<<endl;
	}
	~CA()
	{
		cout<<"CA D-tor for "<<this<<endl;
	}
};

class CB
{
public:
	CB()
	{
		cout<<"CB Ctor   at "<<this<<endl;
	}
	~CB()
	{
		cout<<"CB D-tor for "<<this<<endl;
	}
};


template<typename T>
T* CreateObject()
{
	cout<<"Business stated to log"<<endl;
	T *ptr=new T();
	cout<<"Business completed to log"<<endl;
	cout<<"______________________________"<<endl;
	return ptr;
}


void main73_1()
{
	CA* ptr=CreateObject<CA>();

	CB *ptr1=CreateObject<CB>();

	delete ptr;
	delete ptr1;
}


template<typename T1,typename T2>
class CBase
{
	T1 x;
	T2 y;
public:
	CBase(T1 x,T2 y):x(x),y(y)
	{
		cout<<"Generic class generated for "<<typeid(T1).name()<<" and "<<typeid(T2).name()<<endl;
	}
	void Display()
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		cout<<"___________________"<<endl;
	}
};

template<>
class CBase<int,int>//full specialization
{
	int x;
	int y;
public:
	CBase(int x,int y):x(x),y(y)
	{
		cout<<"Specialized class generated for int and int"<<endl;
	}
	void Display()
	{
		cout<<"**************************"<<endl;
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
		cout<<"**************************"<<endl;
	}
};


void main73_2()
{
	CBase<int,double> obj1(1234,45.67);
	obj1.Display();
	CBase<int,int> obj2(1234,45.67);
	obj2.Display();
	CBase<double,double> obj3(1234.8,45.67);
	obj3.Display();
}

template<typename T1,typename T2,typename T3>
class CDerived:CBase<T2,T3>
{
	T1 z;
public:
	CDerived(T1 x,T2 y,T3 z):z(x),CBase(y,z)
	{
	}
	void Display()
	{
		CBase::Display();
		cout<<"z="<<z<<endl;
	}
};

template<typename T1,typename T2=int>
class CDerivedNew:CBase<T2,int>//partial specialization
{
	T1 z;
public:
	CDerivedNew(T1 x,T2 y):z(x),CBase(y,100)
	{
	}
	void Display()
	{
		CBase::Display();
		cout<<"z="<<z<<endl;
	}
};

void main73_3()
{
	CDerived<int,int,double> obj1(10,20,30);
	obj1.Display();
	CDerived<int,int,int> obj2(10,20,30);
	obj2.Display();
	CDerivedNew<int,double> obj3(10.98,20);
	obj3.Display();
	CDerivedNew<int> obj4(10.98,20);
	obj4.Display();
}


template<typename T,int size>
class Business
{
	T arr[size];
public:
	T & getArr(int index)
	{
		return arr[index];
	}
	
	friend ostream& operator<<(ostream & os,Business<T,size> & par)
	{
		for(int i=0;i<size;i++)
		{
			os<<"arr["<<i<<"]="<<par.arr[i]<<endl;
		}
		os<<"_______________________________"<<endl;
		return os;
	}
};

void main()
{
	Business<int,5> business;
	business.getArr(0)=100;
	business.getArr(1)=200;
	business.getArr(2)=300;
	business.getArr(3)=400;
	business.getArr(4)=500;
	cout<<business;

	Business<double,5> business1;
	business1.getArr(0)=100.23;
	business1.getArr(1)=200.33;
	business1.getArr(2)=300.22;
	business1.getArr(3)=400.44;
	business1.getArr(4)=500.21;
	cout<<business1;
}