/*

#include<iostream>
#include<stdlib.h>
using namespace std;
struct MyStruct {
int data;
MyStruct *next; //self referential
};
class Stack {
MyStruct *head;
MyStruct *CreateNode(int val) {
MyStruct *temp = new MyStruct();
temp->data = val;
temp->next = NULL;
return temp;
}
public:
Stack() :head(NULL) {
}
void Push(int val) {
MyStruct *temp = CreateNode(val);
temp->next = head;
head = temp;
} int Pop() {
int val;
MyStruct *temp = head;
head = head->next;
val = temp->data;
delete temp;
return val;
}
int Peek() {
return head->data;
}
bool IsEmpty() {
return head == NULL;
}
~Stack() {
cout << "Release Memory......" << endl;
while (!IsEmpty())
cout << Pop() << " ";
}
void List() {
cout << "________________________" << endl;
for (MyStruct *temp = head; temp != NULL; temp = temp->next) {
cout << temp->data << endl;
}
cout << "________________________" << endl;
}
void menu() {
int choice, val;
cout << "\n1->Push\n2->Pop\n3->Peak\n4->List\n5->Exit" << endl;
cout << "Enter your choice \n" << endl;
cin >> choice;
switch (choice) {
case 1:
cout << "Enter Value to be pushed" << endl;
cin >> val;
Push(val);
break;
case 2:
if (!IsEmpty())
cout << Pop() << " is deleted !!!" << endl;
else
cout << "Stack Is Empty " << endl;
break;
case 3:
if (!IsEmpty())
cout << "Peek value is " << Peek() << endl;
else
cout << "Stack Is Empty " << endl;
break;
case 4:
if (!IsEmpty())
List();
else
cout << "Stack Is Empty " << endl;
break;
case 5:
this->~Stack();
exit(0);
default:
cout << "Please Enter correct choice!!!" << endl;
}
while (choice != 5) {
menu();
}
}
};
int main() {
Stack st;
st.menu();
return 0;
}

*/