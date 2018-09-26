//
//#include<iostream>
//using namespace std;
//struct MyStruct {
//	int data;
//	MyStruct *next;
//};
//class Queue {
//	MyStruct *head, *tail;
//	static int count;
//	int choice;
//	MyStruct *CreateNode(int val) {
//		MyStruct *temp = new MyStruct();
//		temp->data = val;
//		temp->next = NULL;
//		return temp;
//	}
//public:
//	Queue() :
//			head(NULL), tail(NULL), choice(0) {
//	}
//
//	void menu() {
//
//		int val;
//		cout<<"\n==================================================================="<<endl;
//		cout << "Please Enter Your choice" << endl;
//		cout << "1->Insert Element at first\n2->Insert Element at last"<< endl;
//		cout<< "3->Delete Element at first\n4->Delete Element at last"<< endl;
//		cout << "5->Show List\n6->Show total nodes\n7->Exit" << endl;
//		cin >> choice;
//		cout<<"\n==================================================================="<<endl;
//
//		switch (choice) {
//		case 1:
//			cout << "Enter a value to be inserted ..." << endl;
//			cin >> val;
//			EnquePos(val, 1);
//			cout<<val<<" is pushed At First"<<endl;
//			break;
//
//		case 2:
//			cout << "Enter a value to be Pushed ..." << endl;
//			cin >> val;
//			EnquePos(val, count + 1);
//			cout<<val<<" is pushed At last"<<endl;
//			break;
//		case 3:
//			if (count == 0)
//				cout << "UnderFlow" << endl;
//			else
//				cout<<DequePos(1)<<" is pop At first position "<<endl;
//			break;
//		case 4:
//			if (count == 0)
//				cout << "UnderFlow" << endl;
//			else
//				cout<<DequePos(count)<<" is pop at last position "<<endl;
//			break;
//		case 5:
//			List();
//			break;
//		case 6:
//			cout << "Total Number of nodes is "<<count << endl;
//			break;
//		case 7:
//			break;
//		default:
//			cout << "\nPlease Enter Valid Choice" << endl;
//			break;
//		}
//		while (choice != 7) {
//			menu();
//		}
//
//	}
//	void EnquePos(int val, int pos) {
//		count++;
//		MyStruct *temp = CreateNode(val);
//		if (IsEmpty() && pos == 1) {
//			head = temp;
//			tail = temp;
//		} else if (pos == 1) {
//			temp->next = head;
//			head = temp;
//		} else if (pos == 2) {
//			temp->next = head->next;
//			head->next = temp;
//		} else {
//			MyStruct *trav = head;
//			for (int i = 0; i < (pos - 2); i++) {
//				trav = trav->next;
//			}
//			temp->next = trav->next;
//			trav->next = temp;
//		}
//	}
//	int DequePos(int pos) {
//		int val = -1;
//			MyStruct *temp = head;
//			 if (count == 1 && pos == 1) {
//				val = head->data;
//				head = NULL;
//				tail = NULL;
//				delete temp;
//			} else if (pos == 1) {
//				val = head->data;
//				head = head->next;
//				delete temp;
//			} else {
//				MyStruct *trav = head;
//				for (int i = 0; i < (pos - 2); i++) {
//					trav = trav->next;
//				}
//				val = trav->next->data;
//				temp = trav;
//				trav = trav->next;
//				temp->next = trav->next;
//				delete trav;
//			}
//		count--;
//		return val;
//	}
//	bool IsEmpty() {
//		return head == NULL;
//	}
//	void List() {
//		if (count == 0) {
//			cout << "List is empty" << endl;
//		} else {
//			for (MyStruct *trav = head; trav != NULL; trav = trav->next) {
//				cout << trav->data << "\t";
//			}
//		}
//		}
//
//	~Queue() {
//		cout<<"******************************************"<<endl;
//		while (count!=0) {
//			cout<<DequePos(count)<<"   ";
//		}
//		cout<<"\n******************************************"<<endl;
//	}
//};
//int Queue::count = 0;
//int main() {
//	Queue q;
//	q.menu();
//	return 0;
//}
