#include<iostream>
//using namespace std;
namespace nm70
{
namespace Sachin
{
	void connect()
	{
		std::cout<<"socket connection"<<std::endl;
	}
	int k=100;
	int j=200;
}

namespace Saurav
{
	void connect()
	{
		std::cout<<"Db connection"<<std::endl;
	}
}


void main70_1()
{
	Sachin::connect();
	Saurav::connect();
}


void main70_2()
{
	using Sachin::connect;

	connect();
	//cout<<"k="<<k<<endl;//error
}

void main70_3()
{
	using namespace Sachin;
	using  std::cout;
	using std::endl;
	connect();
	cout<<"k="<<k<<endl;//
}

namespace Rahul
{
	int a=100;
	int b=200;
	int c=300;
	namespace Sewag
	{
		int x=1000;
		int y=2000;
		int z=3000; 
	}
}

void main70_4()
{
	using namespace std;
	using namespace Rahul;
	using namespace Rahul::Sewag;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"z="<<z<<endl;
}


namespace Shivam
{
	int x=1000;
	int y=2000;
	int z=3000;
}
namespace Shivam
{
	int a=666;
	int b=777;
	int c=888;
}

void main70_5()
{
	using namespace Shivam;
	using namespace std;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"z="<<z<<endl;
}



namespace Virat
{
	int x=1000;
	int y=2000;
	int z=3000;
}
namespace Rohit
{
	using namespace Virat;
	int a=666;
	int b=777;
	int c=888;
}

void main()
{
	using namespace Rohit;
	using namespace std;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"z="<<z<<endl;
}
}