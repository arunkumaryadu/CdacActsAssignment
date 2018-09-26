#include<iostream>
#include<string>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

class List
{
	Node *head;
	Node *tail;
	
	Node *nullNode;
	Node * CreateNode(int data)
	{
		Node *temp=new Node();
		temp->data=data;
		temp->next=nullNode;
		return temp;
	}
public:
	List():head(NULL),tail(NULL),nullNode(new Node())
	{
		nullNode->next=NULL;
	}
	Node* begin()
	{
		
		return head;
	}
	Node* end()
	{
		
		return nullNode;
	}
	void Append(int data)
	{
		Node *temp=CreateNode(data);
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
			tail->next=temp;
		}
		tail=temp;
	}

	class Iterator
	{
		Node *node;
		Node *current;
	public:
		Iterator(Node* node):node(node),current(node)
		{
		}
		int operator*()
		{
			return node->data;
		}
		Node* operator++()
		{
			node=node->next;
			return node;
		}
		operator Node*()
		{
			return node;
		}
	};

	~List()
	{
		while(head!=NULL)
		{
			Node* temp=head;
			head=head->next;
			delete temp;
		}
		head=tail=NULL;
	
	}
};

void main()
{
	List list;
	list.Append(10);
	list.Append(20);
	list.Append(30);
	list.Append(40);
	list.Append(50);
	List::Iterator it1= list.begin();
	List::Iterator it2= list.end();

	cout<<*it1<<endl;
	it1++;
	cout<<*it1<<endl;

	/*while(it1!=it2)
	{
		cout<<*it1<<endl;
		++it1;
	}*/

}