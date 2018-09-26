#include<iostream>
#include<string>
using namespace std;
namespace nm011
{
//0. additional business id:80
//1.logger (*) id:100
//2.Encoder (1) id:200
//3.Hash     (1) id:300
//4.Encrypt   (1) id:400  

typedef string (*FPTR)(string); 
struct Pipe
{
	int id;
	//FPTR fp;
	Pipe *next;
};

class ProcessMessage
{
public:
	void DoJob(string msg)
	{
		cout<<"openning channel to send msg"<<endl;
		
		cout<<"openning downstream channel to Recieve msg"<<endl;
	}
};
void RegisterPipe(int id,FPTR fp)
{

}

//--------------------------

string CustomBusiness(string msg)
{
	cout<<"Added a Verisign certificate"<<endl;
	return "0."+msg;
}
string FileLogger(string msg)
{
	cout<<"Info logged to the file "<<endl;
	return msg;
}

string Encrypter(string msg)
{
	cout<<"Message Encrypted using Symmetric Encryption"<<endl;
	return msg;
}

void main()
{
	string msg="Kohli under fire. Ravi Hiding. MSK prasad want new faces";
	
	RegisterPipe(80,CustomBusiness);
	RegisterPipe(100,FileLogger);
	RegisterPipe(400,Encrypter);
	ProcessMessage prc;
	
	prc.DoJob(msg);

}
}