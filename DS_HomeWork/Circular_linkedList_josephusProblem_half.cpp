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
		cout
				<< "\n==================================================================="
				<< endl;
		cout << "Please Enter Your choice" << endl;
		cout << "1->Push at start\n2->Push At last\n3->Push At given position"
				<< endl;
		cout
				<< "4->Delete From Start\n5->Delete From Last\n6->Delete from Given Position"
				<< endl;
		cout << "7->Reverse List\n8->Show List\n9->Show total nodes\n10->Exit"
				<< endl;
		cin >> choice;
		cout
				<< "\n==================================================================="
				<< endl;

		switch (choice) {
		case 1:
			cout << "Enter a value to be Pushed ..." << endl;
			cin >> val;
			EnquePos(val, 1);
			cout << val << " is pushed At First" << endl;
			break;

		case 2:
			cout << "Enter a value to be Pushed ..." << endl;
			cin >> val;
			EnquePos(val, count + 1);
			cout << val << " is pushed At last" << endl;
			break;
		case 3:
			cout << "Enter the Position Where Value to be pushed.." << endl;
			cin >> pos;
			if (pos == 0 || !(pos <= count + 1)) {
				cout << "position should be greater than 0 And Less than "
						<< count + 2 << endl;
			} else {
				cout << "Enter a value to be Pushed ..." << endl;
				cin >> val;
				EnquePos(val, pos);
			}
			cout << val << " is pushed At " << pos << endl;
			break;
		case 4:
			if (count == 0)
				cout << "UnderFlow" << endl;
			else
				cout << DequePos(1) << " is pop At first position " << endl;
			break;
		case 5:
			if (count == 0)
				cout << "UnderFlow" << endl;
			else
				cout << DequePos(count) << " is pop at last position " << endl;
			break;
		case 6:
			if (count == 0)
				cout << "UnderFlow" << endl;
			else {
				int pos;
				cout << "Enter a position " << endl;
				cin >> pos;
				if (pos <= 0 && pos > count) {
					cout << "Position should be greater than 0 and less than "<< count + 1 << endl;
				} else {

					cout << DequePos(pos) << " is pop at position" << pos
							<< "\n";
				}
			}
			break;
		case 7:
			if (count == 0)
				cout << "UnderFlow" << endl;
			else {
				int pos,ran;
				cout << "Enter the position from where you want to start counting " << endl;
				cin >> pos;
				cout << "Enter the random value for counting " << endl;
								cin >> ran;
				if (pos <= 0 && pos > count) {
					cout << "Position should be greater than 0 and less than "
							<< count + 1 << endl;
				} else {

					cout << josephus(pos,ran) << " is pop at position" << pos<< "\n";
				}
			}
			break;
		case 8:
			List();
			break;
		case 9:
			cout << "Total Number of nodes is " << count << endl;
			break;
		case 10:
			break;
		default:
			cout << "\nPlease Enter Valid Choice" << endl;
			break;
		}
		while (choice != 10) {
			menu();
		}

	}
	void EnquePos(int val, int pos) {
		count++;
		MyStruct *temp = CreateNode(val);
		if (IsEmpty() && pos == 1) {
			head = temp;
			tail = temp;
		} else if (pos == 1) {
			temp->next = head;
			head = temp;
			tail->next = temp;
		} else if (pos == 2) {
			temp->next = head->next;
			head->next = temp;
		} else {
			MyStruct *trav = head;
			for (int i = 0; i < (pos - 2); i++) {
				trav = trav->next;
			}
			temp->next = trav->next;
			trav->next = temp;
		}
	}
	int josephus(int jpos, int ran) {
		MyStruct *jtrav = head;
		int i = 1;
		for (; i < (jpos); i++) {
			jtrav = jtrav->next;
		}
		MyStruct *ptr1 = jtrav;
		MyStruct *ptr2 = jtrav;
		    while (count!=1)
		    {
		        // Find ran no. node
		        int m = 1;
		        while (m != ran+1)
		        {
		            ptr2 = ptr1;
		            ptr1 = ptr1->next;
		            m++;i++;
		            if(i==count)
		            	i=1;

		        }
		        /* Remove the node */
		        ptr2->next = ptr1->next;
		        DequePos(i);
		        ptr1 = ptr2;
		    }

		return ptr1->data;
	}

	int DequePos(int pos) {
		int val = -1;
		MyStruct *temp = head;
		if (count == 1 && pos == 1) {
			val = head->data;
			head = NULL;
			delete tail;
		} else if (pos == 1) {
			val = head->data;
			head = head->next;
			tail->next = head;
			delete temp;
		} else {
			MyStruct *trav = head;
			for (int i = 0; i < (pos - 2); i++) {
				trav = trav->next;
			}
			val = trav->next->data;
			temp = trav;
			trav = trav->next;
			temp->next = trav->next;
			delete trav;
		}
		count--;
		return val;
	}
	bool IsEmpty() {
		return head == NULL;
	}
	void List() {
		if (count == 0) {
			cout << "List is empty" << endl;
		} else {
			int i = 1;
			for (MyStruct *trav = head; i != count + 1; trav = trav->next) {
				cout <<"("<<i<<")"<< trav->data << "\t \t";
				i++;
			}
		}


	if(count==0) {
		cout<<"List is empty!!"<<endl;
	} else {
		MyStruct *newHead=NULL;
		MyStruct *newTail=NULL;
		MyStruct *newTrav=head;
		while(newTrav!=NULL) {
			newTail=newTrav->next;
			newTrav->next=newHead;
			newHead=newTrav;
			newTrav=newTail;
		}
		head=newHead;
	}
} ~Queue() {
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
