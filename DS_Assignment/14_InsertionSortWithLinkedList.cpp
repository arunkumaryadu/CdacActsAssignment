/*
#include<iostream>
#include<stdlib.h>
using namespace std;
struct MyStruct {
int data;
MyStruct *next;
};
class LinkedListInsertionSort {
MyStruct *head;
MyStruct *CreateNode(int val) {
MyStruct *temp = new MyStruct();
temp->data = val;
temp->next = NULL;
return temp;
}
public:
LinkedListInsertionSort() :head(NULL) {
}
void menu() {
int choice;
int pos, val;
cout << "\n===================================================================" << endl;
cout << "Please Enter Your choice" << endl;
cout << "1->Push at start" << endl;
cout << "2->Delete From Start\n3->Delete From Last\n4->Delete from Given Position" << endl;
cout << "5->Reverse List\n6->Show List\n7->Show total nodes\n8->Exit" << endl;
cin >> choice;
cout << "\n===================================================================" << endl;
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
cout << DequePos(1) << " is pop At first position " << endl;
break;
case 3:
if (IsEmpty())
cout << "UnderFlow" << endl;
else
cout << DequePos(totalnode()) << " is pop at last position " << endl;
break;
case 4:
if (IsEmpty())
cout << "UnderFlow" << endl;
else {
int pos;
cout << "Enter the position " << endl;
cin >> pos;
if (pos <= 0 && pos > totalnode()) {
cout << "Position should be greater than 0 and less than "
<< totalnode() + 1 << endl;
}
else {
cout << DequePos(pos) << " is pop at position" << pos
<< "\n";
}
}
break;
case 5:
LinkListRev();
break;
case 6:
List();
break;
case 7:
cout << "Total Number of nodes is " << totalnode() << endl;
break;
case 8:
cout << "******************************************" << endl;
while (!IsEmpty()) {
cout << DequePos(totalnode()) << " ";
}
cout << "\n******************************************" << endl;
exit(0);
default:
cout << "\nPlease Enter Valid Choice" << endl;
break;
}
while (choice != 8) {
menu();
}
}
void EnquePos(int val) {
MyStruct *temp = CreateNode(val);
MyStruct *it1, *it2;
if (IsEmpty()) {
head = temp;
}
else if (temp->data <= head->data) {
temp->next = head;
head = temp;
}
else {
for (it1 = head, it2 = head; (it1 != NULL) && (temp->data >= it1->data); it2 = it1, it1 = it1->next);
it2->next = temp;
temp->next = it1;
}
}
int DequePos(int pos) {
int val = -1;
MyStruct *temp = head;
if (totalnode() == 1 && pos == 1) {
val = head->data;
head = NULL;
}
else if (pos == 1) {
val = head->data;
head = head->next;
delete temp;
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
}
return val;
}
bool IsEmpty() {
return head == NULL;
}
void List() {
if (IsEmpty()) {
cout << "List is empty" << endl;
}
else {
for (MyStruct *trav = head; trav != NULL; trav = trav->next) {
cout << trav->data << "\t";
}
}
}
void LinkListRev() {
if (IsEmpty()) {
cout << "List is empty!!" << endl;
}
else {
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
}
int totalnode() {
int i = 0;
if (!IsEmpty()) {
for (MyStruct *trav = head; trav != NULL; ++i, trav = trav->next);
}
return i;
}
~LinkedListInsertionSort() {
cout << "******************************************" << endl;
while (!IsEmpty()) {
cout << DequePos(totalnode()) << " ";
}
cout << "\n******************************************" << endl;
}
};
int main() {
LinkedListInsertionSort q;
q.menu();
return 0;
}

*/