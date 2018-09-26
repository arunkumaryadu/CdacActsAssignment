#include<iostream>
using namespace std;
namespace nm0005
{
struct MyStruct
{
	int data;
	MyStruct *next;
};

class Queue
{
	MyStruct *head,*tail;
	MyStruct *CreateNode(int val)
	{
		MyStruct *temp=new MyStruct();
		temp->data=val;
		temp->next=NULL;
		return temp;
	}
public:
	Queue():head(NULL),tail(NULL)
	{
	}
	void Enque(int val)
	{
		MyStruct *temp=CreateNode(val);
		if(IsEmpty())
			head=temp;
		else
			tail->next=temp;
		tail=temp;
	}
	int Deque()
	{
		int val=-1;
		if(!IsEmpty())
		{
			MyStruct *temp=head;
			head=head->next;
			cout<<"Releasing the node with "<<temp->data<<endl;
			val=temp->data;
			delete temp;
		}
		return val;
	}
	bool IsEmpty()
	{
		return head==NULL;
	}
	void List()
	{
		cout<<"_________________________________"<<endl;
		for(MyStruct *trav=head;trav!=NULL;trav=trav->next)
		{
			cout<<trav->data<<"\t";
		}
		cout<<endl<<"_________________________________"<<endl;
	}
	~Queue()
	{
		while(!IsEmpty())
		{
			Deque();
		}
	}
};

void main()
{
	Queue q;
	q.Enque(10);
	q.Enque(20);
	q.Enque(30);
	q.Enque(40);

	q.List();

	q.Deque();
	q.List();
}
}