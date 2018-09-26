#include<iostream>
using namespace std;
namespace nm007
{
class ILogger
{
public:
	virtual void Log(char *msg)=0;
};

class NullLogger:public ILogger
{
public:
	virtual void Log(char *msg)
	{
		//do nothing
	}
};

class FileLogger:public ILogger
{
public:
	virtual void Log(char *msg)
	{
		cout<<"File Logger ( "<<msg<<" )"<<endl;
	}
};

class ServiceLogger:public ILogger
{
public:
	virtual void Log(char *msg)
	{
		cout<<"Service Logger ( "<<msg<<" )"<<endl;
	}
};

class EtwLogger:public ILogger
{
public:
	virtual void Log(char *msg)
	{
		cout<<"Etw Logger ( "<<msg<<" )"<<endl;
	}
};
class LoggerFactory
{
public:
	static ILogger * CreateLoggers()
	{
		//return new NullLogger();
		//return new FileLogger();
		//return new ServiceLogger();
		return new EtwLogger();
	}
};

//---------------------------------

void main()
{
	cout<<"Business Started "<<endl;
	ILogger *il=LoggerFactory::CreateLoggers();//logged some where	
	il->Log("Product discontinued");
	cout<<"Business Completed "<<endl;
}
}