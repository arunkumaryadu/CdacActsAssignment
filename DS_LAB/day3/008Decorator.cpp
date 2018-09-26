#include<iostream>
using namespace std;
namespace nm008
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

class Helper:public ILogger
{
	ILogger *il;
public:
	Helper(ILogger *il):il(il)
	{
	}
	void Log(char *msg)
	{
		il->Log(msg);//traversal
	}
};

class FileLogger:public Helper
{
public:
	FileLogger(ILogger *il):Helper(il)
	{
	}
	virtual void Log(char *msg)
	{
		cout<<"File Logger ( "<<msg<<" )"<<endl;
		Helper::Log(msg);
	}
};

class ServiceLogger:public Helper
{
public:
	ServiceLogger(ILogger *il):Helper(il)
	{
	}
	virtual void Log(char *msg)
	{
		cout<<"Service Logger ( "<<msg<<" )"<<endl;
		Helper::Log(msg);
	}
};

class EtwLogger:public Helper
{
public:
	EtwLogger(ILogger *il):Helper(il)
	{
	}
	virtual void Log(char *msg)
	{
		cout<<"Etw Logger ( "<<msg<<" )"<<endl;
		Helper::Log(msg);
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
		//return new EtwLogger();
		return new EtwLogger(new ServiceLogger(new FileLogger(new NullLogger())));
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