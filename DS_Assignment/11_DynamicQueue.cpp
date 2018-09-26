/*

#include<iostream>
#include<stdlib.h>
using namespace std;
struct MyStruct {
int data;
MyStruct *next;
};
class Queue {
MyStruct *head, *tail;
MyStruct *CreateNode(int val) {
MyStruct *temp = new MyStruct();
temp->data = val;
temp->next = temp;
return temp;
}
public:
Queue() :head(NULL), tail(NULL) {
}
void menu() {
int choice;
int val;
cout << "\n====================================================" << endl;
cout << "Please Enter Your choice" << endl;
cout << "1->Enque\n";
cout << "2->Deque\n";
cout << "3->Show List\n4->Show total nodes\n5->Exit" << endl;
cin >> choice;
cout << "\n=====================================================" << endl;
switch (choice) {
case 1:
cout << "Enter a value to be Pushed ..." << endl;
cin >> val;
Enque(val);
cout << val << " is pushed At First" << endl;
break;
case 2:
if (IsEmpty())
cout << "UnderFlow" << endl;
else
cout << Deque() << " is poped " << endl;
break;
case 3:
List();
break;
case 4:
cout << "Total Number of nodes is " << totalnode() << endl;
break;
case 5:
while (!IsEmpty()) {
cout << Deque() << " ";
}
exit(0);
default:
cout << "\nPlease Enter Valid Choice" << endl;
break;
}
while (choice != 5) {
menu();
}
}
void Enque(int val) {
MyStruct *temp = CreateNode(val);
if (!IsEmpty())
temp->next = head;
else
tail = temp;
head = temp;
} int Deque() {
int val = 0;
if (head == tail) {
MyStruct *temp = head;
val = head->data;
head = NULL;
tail = NULL;
delete temp;
}
else {
MyStruct *trav, *temp;
for (trav = head; trav->next != tail; trav = trav->next);
val = tail->data;
temp = tail;
tail = trav;
delete temp;
}
return val;
}
bool IsEmpty() {
return head == NULL;
}
int totalnode() {
if (!IsEmpty()) {
int i = 0;
MyStruct *trav;
for (trav = head; trav != tail; i = i + 1, trav = trav->next)
;
return i + 1;
}
else
return 0;
}
void List() {
if (!IsEmpty()) {
for (MyStruct *trav = head; trav != tail; trav = trav->next)
cout << trav->data << " \t";
cout << tail->data << endl;
}
else
cout << "List is empty" << endl;
}
~Queue() {
cout << "******************************************" << endl;
while (!IsEmpty()) {
cout << Deque() << " ";
}
cout << "\n******************************************" << endl;
}
};
int main() {
Queue q;
q.menu();
return 0;
}

*/