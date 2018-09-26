/*
#include<iostream>
using namespace std;
struct MyStruct {
int data;
MyStruct *next;
};
class MergeLinkedList {
MyStruct *head, *tail;
int choice;
MyStruct *CreateNode(int val) {
MyStruct *temp = new MyStruct();
temp->data = val;
temp->next = NULL;
return temp;
}
public:
MergeLinkedList() :
head(NULL), tail(NULL) {
}
void menu() {
int val;
cout << "\n============================" << endl;
cout << "Please Enter Your choice" << endl;
cout << "1->Push at start" << endl;
cout << "2->Delete From Last" << endl;
cout << "3->Show List\n4->Show total nodes\n5->Exit" << endl;
cin >> choice;
cout << "\n============================" << endl;
switch (choice) {
case 1:
cout << "Enter a value to be Pushed ..." << endl;
cin >> val;
EnquePos(val);
cout << val << " is pushed" << endl;
break;
case 2:
if (IsEmpty())
cout << "UnderFlow" << endl;
else
cout << DequePos() << " is pop at last position " << endl;
break;
case 3:
List();
break;
case 4:
cout << "Total Number of nodes is " << totalnode() << endl;
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
void EnquePos(int val) {
MyStruct *temp = CreateNode(val);
if (IsEmpty()) {
head = temp;
tail = temp;
}
else {
temp->next = head;
head = temp;
}
}
int DequePos() {
int val = -1;
MyStruct *temp = head;
if (head == tail) {
val = head->data;
head = NULL;
tail = NULL;
delete temp;
}
else {
MyStruct *trav;
for (trav = head; trav->next != tail; trav = trav->next)
;
val = tail->data;
temp = tail;
tail = trav;
tail->next = temp->next;
delete temp;
}
return val;
}
bool IsEmpty() {
return head == NULL;
}
void List() {
if (head == NULL) {
cout << "List is empty" << endl;
}
else {
for (MyStruct *trav = head; trav != NULL; trav = trav->next) {
cout << trav->data << "\t";
}
}
}
void LinkListRev() {
if (!IsEmpty()) {
MyStruct *newHead = NULL;
MyStruct *newTail = NULL;
MyStruct *newTrav = head;
while (newTrav != NULL) {
newTail = newTrav->next;
newTrav->next = newHead;
newHead = newTrav;
newTrav = newTail;
}
head = newHead;
}
else
cout << "List is Empty" << endl;
}
void Merge(MergeLinkedList & l1, MergeLinkedList & l2) {
MergeLinkedList l3;
int firstsize = l1.totalnode();
int secondsize = l2.totalnode();
int total = firstsize + secondsize;
for (int i = 0; i <= total; i++) {
if (l1.IsEmpty() && l2.IsEmpty()) {
}
else if (l1.IsEmpty()) {
l3.EnquePos(l2.tail->data);
l2.DequePos();
}
else if (l2.IsEmpty()) {
l3.EnquePos(l1.tail->data);
l1.DequePos();
}
else if (l1.tail->data < l2.tail->data) {
l3.EnquePos(l1.tail->data);
l1.DequePos();
}
else if (l1.tail->data > l2.tail->data) {
l3.EnquePos(l2.tail->data);
l2.DequePos();
}
else if (l1.tail->data == l2.tail->data) {
l3.EnquePos(l2.tail->data);
l2.DequePos();
l3.EnquePos(l1.tail->data);
l1.DequePos();
}
}
cout << "\nResult is" << endl;
cout << "=====================================" << endl;
l3.List();
cout << "\n=====================================" << endl;
}
int totalnode() {
int i = 0;
MyStruct *trav;
if (!IsEmpty())
for (trav = head, i = 1; trav != tail; ++i, trav = trav->next);
return i;
}
~MergeLinkedList() {
cout << "\n******************************************" << endl;
cout << "Memory Release!!!!!!!!!!!" << endl;
while (!IsEmpty()) {
cout << DequePos() << " ";
}
cout << "\n******************************************" << endl;
}
};
int main() {
MergeLinkedList q1, q2;
MergeLinkedList q3;
cout << "Enter First Linked List data" << endl;
q1.menu();
cout << "Enter Second Linked List data" << endl;
q2.menu();
cout << "First list is" << endl;
q1.List();
cout << "\nSecond list is" << endl;
q2.List();
q3.Merge(q1, q2);
return 0;
}

*/