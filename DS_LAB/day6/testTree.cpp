#include<iostream>
#include<string> 
#include<stack>
using namespace std;


struct Node
{
	char c;
	Node *left;
	Node *rigth;
};

class Tree
{
	Node * Create(char c)
	{
		Node *temp=new Node();
		temp->left=temp->rigth=NULL;
		temp->c=c;
		return temp;
	}
	Node *root;
	stack<Node*> stk;
public:
	Tree():root(NULL)
	{
	}
	operator Node*()
	{
		return root;
	}
	void CreateTree(string expr)
	{
		int length=expr.length();
		for(int i=0;i<length;i++)
		{
			char c=expr[i];
			Node*temp=Create(c);
			if(!isalpha(c))
			{
				temp->rigth=stk.top();
				stk.pop();
				temp->left=stk.top();
				stk.pop();
			}
			stk.push(temp);
		}
		
		root=stk.top();
		stk.pop();
	}


	void PostFix(Node *ptr)
	{
		if(ptr)
		{
			PostFix(ptr->left);
			PostFix(ptr->rigth);
			cout<<ptr->c;
		}
	}

	void InFix(Node *ptr)
	{
		if(ptr)
		{
			InFix(ptr->left);
			cout<<ptr->c;
			InFix(ptr->rigth);
		}
	}

	void PreFix(Node *ptr)
	{
		if(ptr)
		{
			cout<<ptr->c;
			PreFix(ptr->left);
			PreFix(ptr->rigth);
		}
	}
	int Eval(Node *ptr)
	{
		if(ptr)
		{
			switch(ptr->c)
			{
			case '+':return Eval(ptr->left) + Eval(ptr->rigth);
			case '-':return Eval(ptr->left) - Eval(ptr->rigth);
			case '*':return Eval(ptr->left) * Eval(ptr->rigth);
			case '/':return Eval(ptr->left) / Eval(ptr->rigth);
			default:
				{
					cout<<"Enter a value for "<<ptr->c<<endl;
					int x;
					cin>>x;
					return x;
				}
			
			};
		}
		return 0;
	}
};


void main()
{
	Tree tree;
	tree.CreateTree("abc*+d+");
	tree.PostFix(tree);
	cout<<endl;
	tree.PreFix(tree);
	cout<<endl;
	tree.InFix(tree);
	cout<<endl;

	cout<<tree.Eval(tree)<<endl;
}