#include<iostream>
using namespace std;
struct MyStruct {
	int data;
	MyStruct *next;
};
class Queue {
	MyStruct *head, *tail;
	static int count;
	int choice;
	MyStruct *CreateNode(int val) {
		MyStruct *temp = new MyStruct();
		temp->data = val;
		temp->next = temp;
		return temp;
	}
public:
	Queue() :
		head(NULL), tail(NULL), choice(0) {
	}

	void menu() {

		int pos, val;
		cout << "\n==================================================================="<< endl;
		cout << "Please Enter Your choice" << endl;
		cout << "1->EnQueue\n";			
		cout << "2->DeQueue\n";
		cout << "3->Show List\n4->Show total nodes\n5->Exit"<< endl;
		cin >> choice;
		cout << "\n==================================================================="<< endl;
		switch (choice) {
		case 1:
			cout << "Enter a value to be Pushed ..." << endl;
			cin >> val;
			EnquePos(val, 1);			
			cout << val << " is pushed At First" << endl;
			break;
		case 2:
			if (count == 0)
				cout << "UnderFlow" << endl;
			else {
				cout << DequePos(count) << " is pop at "<<count<<" position " << endl;			
			}				
			break;
		case 3:
			List();
			break;
		case 4:
			cout << "Total Number of nodes is " << count << endl;
			break;
		case 5:
				break;
		default:
			cout << "\nPlease Enter Valid Choice" << endl;
			break;
		}
		while (choice != 5) {
			menu();
		}
	}
	void EnquePos(int val, int pos) {
		MyStruct *temp = CreateNode(val);
		if (IsEmpty() && pos == 1) {
			head = temp;
			tail = temp;
		}
		else if (pos == 1) {
			temp->next = head;
			head = temp;
			tail->next = temp;
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
		count++;
	}
	int DequePos(int pos) {
		int val = -1;
		MyStruct *temp = head;
		if (count == 1 && pos == 1) {
			val = head->data;
			//cout << head << "  " << tail << endl;
			tail = NULL;
			delete head;
			count--;
		}
		else {
			MyStruct *trav = head;
			for (int i = 0; i < (pos - 2); i++) {
				trav = trav->next;
			}
			val = trav->next->data;
			temp = trav;
			trav = trav->next;
			temp->next = trav->next;
			delete trav;
			count--;
		}
		
		return val;
	}
	bool IsEmpty() {
		return head == NULL;
	}
	void List() {
		if (count == 0) {
			cout << "List is empty" << endl;
		}
		else {
			int i = 1;
			for (MyStruct *trav = head; i != count + 1; trav = trav->next) {
				cout << "(" << i << ")" << trav->data << "\t \t";
				i++;
			}
		}
	}
	~Queue() {
		cout << "******************************************" << endl;
		while (count != 0) {
			cout << DequePos(count) << "   ";
		}
		cout << "\n******************************************" << endl;
	}
};
int Queue::count = 0;
int main() {
	Queue q;
	q.menu();
	return 0;
}
