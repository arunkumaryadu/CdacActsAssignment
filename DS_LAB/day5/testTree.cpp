#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};
class Tree
{
	Node *root;
	Node* CreateNode(int value)
	{
		Node *temp=new Node();
		temp->data=value;
		temp->left=temp->right=NULL;
		return temp;
	}
public:
	operator Node*()
	{
		return root;
	}
	Tree():root(NULL)
	{
	}
	
	void Insert(int val)
	{

		Node *temp=CreateNode(val);
		if(root==NULL)
		{
			root=temp;
		}
		else
		{
			Node *trav1,*trav2;
			trav1=trav2=root;
			//for(trav2=trav1=root;trav2!=NULL;trav1=trav2,(trav2=(val<=trav2->data)?trav2->left:trav2->right));
			while(trav2!=NULL)
			{
				trav1=trav2;
				trav2=(val<=trav2->data)?trav2->left:trav2->right;
			}

			if(val<=trav1->data)
			{
				trav1->left=temp;
			}
			else
			{
				trav1->right=temp;
			}
		}
	}


	void PreOrder(Node *trav)
	{
		if(trav!=NULL)
		{
			cout<<trav->data<<"\t";
			PreOrder(trav->left);
			PreOrder(trav->right);
		}
	}
	void PostOrder(Node *trav)
	{
		if(trav!=NULL)
		{
			
			PostOrder(trav->left);
			PostOrder(trav->right);
			cout<<trav->data<<"\t";
		}
	}
	void InOrder(Node *trav)
	{
		if(trav!=NULL)
		{
			
			InOrder(trav->left);
			cout<<trav->data<<"\t";
			InOrder(trav->right);
			
		}
	}
};

void main()
{
	int arr[7]={10,5,15,3,7,12,20};
	Tree tree;

	for(int i=0;i<7;i++)
	{
		tree.Insert(arr[i]);
	}
	cout<<"\n_____________________________________"<<endl;
	tree.PreOrder(tree);
	cout<<"\n_____________________________________"<<endl;
	tree.PostOrder(tree);
	cout<<"\n_____________________________________"<<endl;
	tree.InOrder(tree);
	cout<<"\n_____________________________________"<<endl;

}
