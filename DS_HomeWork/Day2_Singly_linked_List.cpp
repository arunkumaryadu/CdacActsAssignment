#include<iostream>
using namespace std;
struct MyStruct
{
	int data;
	MyStruct *next;
	
};
class Queue
{
	MyStruct *head, *tail;
	static int count;
	MyStruct *CreateNode(int val)
	{
		MyStruct *temp = new MyStruct();
		temp->data = val;
		temp->next = NULL;
		return temp;
	}
public:
	Queue() :head(NULL), tail(NULL)
	{
	}
	void menu() {
		int choice;
		cout << "Please Enter Your choice" << endl;
		cout << "1->Push at start\n2->Push At last\n3->Push At given position" << endl;
		cout << "4->Delete From Start\n5->Delete From Last\n6->Delete from Given Position" << endl;
		cout << "7->Reverse Queue\n8->List\n9->Exit" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			int val;
			cout << "Enter a value to be Pushed ..." << endl;
			cin >> val;
			EnqueBeg(val);
			count++;
			break;
		case 2:
			int val;
			cout << "Enter a value to be Pushed ..." << endl;
			cin >> val;
			count++;
			EnqueEnd(val);
			break;
		case 3:
			int pos, val;
			cout << "Enter the Position Where Value to be pushed.." << endl;
			cin >> pos;
			if (count <= pos+1) {
				cout << "Enter a value to be Pushed ..." << endl;
				cin >> val;
				EnquePos(val, pos);
				count++;
			}
			else
			{
				cout << "you have total " << count << " element so please enter Position between 1 to" << count + 1 << endl;
			}
			
			break;
		case 4:
			cout << "Delete from beg" << endl;
			break;
		case 5:
			cout << "delete from last" << endl;
			break;
		case 6:
			cout << "delete from pos" << endl;
			break;
		case 7:
			cout << "Reversed" << endl;
			break;
		case 8:
			cout << "list" << endl;
			break;
		case 9:
			cout << "exit" << endl;
			break;
		default:
			cout << "Please Enter Valid Choice" << endl;
			break;
		

		}
	}
	void EnqueBeg(int val) {
		MyStruct *temp = CreateNode(val);
		if (!IsEmpty())
			temp->next = head;
		head = temp;		
	}
	void EnqueEnd(int val)
	{
		MyStruct *temp = CreateNode(val);
		if (IsEmpty())
			head = temp;
		else
			tail->next = temp;
		tail = temp;
	}
	void EnquePos(int val, int pos) {
		MyStruct *temp = CreateNode(val);
		if (IsEmpty() && pos==1) {
			head = temp;
			tail = temp;
		}
		else if(IsEmpty())
		{
			cout << "queue is Empty You should Insert Your element At position one" << endl;
		}
		else if (pos == 1) {
			temp->next = head;
			head = temp;
		}
		else if (pos == 2) {
			temp->next = head->next;
			head->next = temp;
		}
		else {
			MyStruct *trav = head;
			for (int i = 0; i < (pos - 2); i++) {
				trav = trav->next;
			}
			temp->next = trav->next;
			trav->next = temp;
		}		
	}
	int Deque(int pos) {
		int val = -1;
		if (!IsEmpty())
		{
			MyStruct *temp = head;
			if (head == tail) {
				
			}
			head = head->next;
			cout << "Releasing the node with " << temp->data << endl;
			val = temp->data;
			delete temp;
		}
		return val;
	}
	int Deque()
	{
		int val = -1;
		if (!IsEmpty())
		{
			MyStruct *temp = head;
			head = head->next;
			cout << "Releasing the node with " << temp->data << endl;
			val = temp->data;
			delete temp;
		}
		return val;
	}
	bool IsEmpty()
	{
		return head == NULL;
	}
	void List()
	{
		cout << "_________________________________" << endl;
		for (MyStruct *trav = head; trav != NULL; trav = trav->next)
		{
			cout << trav->data << "\t";
		}
		cout << endl << "_________________________________" << endl;
	}
	~Queue()
	{
		while (!IsEmpty())
		{
			Deque();
		}
	}
};
int Queue::count = 0;
void main()
{
	Queue q;
	q.menu();
	/*q.Enque(10);
	q.Enque(20);
	q.Enque(30);
	q.Enque(40);

	q.List();

	q.Deque();
	q.List();*/
}
