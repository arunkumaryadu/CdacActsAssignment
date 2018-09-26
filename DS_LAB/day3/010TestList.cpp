#include<iostream>
#include<string>
using namespace std;
class MSP
{
	public:
	string make;
	string series;
	string processor;
	MSP(string make,string series,string processor):make(make),series(series),processor(processor)
	{
	}
	static MSP* CreateMSP(string make,string series,string processor)
	{
		return new MSP(make,series,processor);
	}
};
struct Node
{
	string key;
	MSP *msp;
	Node *next;
};
class MyList
{
	public:
	static int count;
	static Node *head;
	static Node *tail;
	static Node *temp;
	static Node* CreateNode(string make,string series,string processor)
	{
		count++;
		string key=make+series+processor;
		temp=new Node();
		temp->key=key;
		temp->msp=new MSP(make,series,processor);
		temp->next=NULL;
		return temp;
	}

	MyList()
	{
	}

	static MSP* GetMSP(string make,string series,string processor)
	{
		string key=make+series+processor;
		Node *temp=NULL;
		bool isAvailable=false;
		for(Node* trav=head;trav!=NULL && !isAvailable ;trav=trav->next)
		{
			if(trav->key==key)
			{
				isAvailable=true;
				temp=trav;
			}
		}
		if(!isAvailable)
		{
			temp=CreateNode(make,series,processor);
			if(head==NULL)
				head=temp;
			else
				tail->next=temp;
			tail=temp;
		}
		return temp->msp;
	}
};
Node * MyList::head;
Node * MyList::tail;
Node * MyList::temp;
int MyList::count=0;

class Computer
{
	MSP *msp;
	string ram;
	string hd;
	string minitor;
public:
	static int count;
	Computer(string make,string series,string processor,
	string ram,string hd,string minitor):
	ram(ram),
	hd(hd),
	minitor(minitor),msp(MyList::GetMSP(make,series,processor))
	{
		count++;
	}
	void Display()
	{
		cout<<"**********************"<<endl;
		cout<<"Make        ="<<msp->make<<endl;
		cout<<"series      ="<<msp->series<<endl;
		cout<<"processor   ="<<msp->processor<<endl;
		cout<<"ram         ="<<ram<<endl;
		cout<<"hd          ="<<hd<<endl;
		cout<<"minitor     ="<<minitor<<endl;
		cout<<"**********************"<<endl;
	}
};
int Computer::count=0;

void main()
{
	Computer c1("dell","lattitude","intel","16gb","1tb","11inch");
	Computer c2("hp","flash","cellron","8gb","1tb","11inch");
	Computer c3("dell","lattitude","intel","12gb","0.5tb","14inch");
	Computer c4("dell","lattitude","intel","8gb","2tb","21inch");
	Computer c5("hp","flash","cellron","16gb","1tb","14inch");
	Computer c6("dell","lattitude","cellron","8gb","2tb","9inch");
	
	c1.Display();
	c2.Display();
	c3.Display();
	c4.Display();
	c5.Display();
	c6.Display();
	cout<<"# computers ordered "<<Computer::count<<endl;
	cout<<"# MSP       ordered "<<MyList::count<<endl;
}