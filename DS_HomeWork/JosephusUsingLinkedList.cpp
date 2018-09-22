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
		head(NULL), tail(NULL) {
	}
	void menu() {
		int choice;
		string val, pos;
		cout << "\n===================================================================" << endl;
		cout << "Please Enter Your choice" << endl;
		cout << "1->Push Data\n2->Josephus\n3->Show List\n4->Show total nodes\n5->Exit" << endl;
		cin >> choice;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\n===================================================================" << endl;
		switch (choice) {
		case 1:
			cout << "Enter a value to be Pushed ..." << endl;
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
				cout << josephus(pos, ran) << " is Alive \n";
			}
			break;
		case 3:
			List();
			break;
		case 4:
			cout << "Total Number of nodes is " << totalNode() << endl;
			break;
		case 5:
			exit(0);
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
		else {
			temp->next = head;
			head = temp;
			tail->next = temp;
		}
	}

	string josephus(string jpos, int ran) {
		if (head == tail || totalNode()==1) {
			cout << "1";
			return head->data;
		}
		else {
			if (SearchList(jpos)) {
				cout << "2";
				MyStruct *jtrav;
				int i = 1;
				for (jtrav = head; jtrav->data != jpos; jtrav = jtrav->next);
				cout << jtrav->data;
				for (int i = 1; i < ran; i++, jtrav = jtrav->next);
				cout << jtrav->data;
				MyStruct *ptr1 = jtrav->next;
				jtrav->next = ptr1->next;
				cout << ptr1->data;
				if (ptr1 == head)
					head = ptr1->next;
				if (ptr1 == tail)
					tail = jtrav;
				delete ptr1;
				List();				
				return this->josephus(jtrav->data, ran);
			}
			else {
				string err = jpos + " Is not on list";
				return err;
			}
		}
	}

	bool SearchList(string val) {
		MyStruct *ptr1;
		bool IsOnQueue = false;
		for (ptr1 = head; ptr1 != tail; ptr1 = ptr1->next) {
			if (val == ptr1->data) {
				IsOnQueue = true;
			}

		}
		if (val == tail->data) {
			IsOnQueue = true;
		}

		return IsOnQueue;
	}
	int totalNode() {
		if (IsEmpty())
			return 0;
		else {
			int i = 0;
			for (MyStruct *trav = head; trav != tail; trav = trav->next, i++);
			return i + 1;
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
			MyStruct *trav;
			for (trav = head; trav != tail; trav = trav->next) {
				cout << trav->data << "\t \t";
			}
			cout << trav->data << endl;
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
