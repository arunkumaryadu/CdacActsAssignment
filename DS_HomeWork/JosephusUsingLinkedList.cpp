#include<iostream>
#include<string>
using namespace std;
struct MyStruct {
	string data;
	MyStruct *next;
};
class Queue {
	MyStruct *head, *tail;
	
	MyStruct *CreateNode(string val) {
		MyStruct *temp = new MyStruct();
		temp->data = val;
		temp->next = temp;
		return temp;
	}
public:
	Queue() :
		head(NULL), tail(NULL){
	}

	void menu() {	
		int choice;
		string val, pos;
		cout << "\n==================================================================="<<endl;
		cout << "Please Enter Your choice" << endl;
		cout<<"1->Push Data\n2->Josephus\n3->Show List\n4->Show total nodes\n5->Exit"<<endl;
		cin >> choice;
		fflush(stdin);
		cout <<"\n==================================================================="<<endl;
		fflush(stdout);

		switch (choice) {
		case 1:
			fflush(stdout);
			cout << "Enter a value to be Pushed ..." << endl;
			fflush(stdout);
			getline(cin, val);
			EnquePos(val);
			break;
		case 2:
			if (head == NULL)
				cout << "UnderFlow" << endl;
			else {
				int ran;
				cout << "Enter the name from whose you want to start counting " << endl;
				cin >> pos;
				cout << "Enter the random value for counting " << endl;
				cin >> ran;
				cout << josephus(pos, ran) << " is pop at position" << pos << "\n";
				}
			break;
		case 3:
			List();
			break;
		case 4:
			cout << "Total Number of nodes is " << totalNode() << endl;
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
	void EnquePos(string val) {
		MyStruct *temp = CreateNode(val);
		if (IsEmpty()) {
			head = temp;
			tail = temp;
		}
		else{
			temp->next = head;
			head = temp;
			tail->next = temp;
		}
	}
	
	string josephus(string jpos, int ran) {
		if (head == tail)
			return head->data;
		else {			
			MyStruct *jtrav;
			for (jtrav = head; jtrav->data!=jpos;jtrav = jtrav->next);
			for (int i = 1; i < ran; i++, jtrav = jtrav->next);	
				MyStruct *ptr1 = jtrav->next;
				jtrav->next = ptr1->next;
				delete ptr1;			
			return josephus(jtrav->data,ran);
		}		
	}

	int totalNode() {
		if (IsEmpty())
			return 0;
		else {
			int i=1;
			for (MyStruct *trav = head; trav != tail; trav = trav->next, i++);
			return i+1;
		}
			
	}
	
	bool IsEmpty() {
		return head == NULL;
	}
	
	void List() {
		if (head == NULL) {
			cout << "List is empty" << endl;
		}
		else {
			for (MyStruct *trav = head; trav != tail; trav = trav->next) {
				cout << trav->data << "\t \t";
			}
		}
	}

	~Queue() {
		cout << "******************************************" << endl;
		MyStruct *temp;
		while (head != NULL) {
			temp = head;
			head = head->next;
			cout << temp->data << "   ";
			delete temp;		
		}
		cout << "\n******************************************" << endl;
	}
};

int main() {
	Queue q;
	q.menu();
	return 0;
}
