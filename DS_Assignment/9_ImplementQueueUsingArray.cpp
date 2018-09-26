/*
#include<iostream>
#include<stdlib.h>
using namespace std;
#define QueueSize 5
class Queue {
int data[QueueSize];
int front, end;
public:
Queue() :front(-1), end(-1) {
}
void Push(int val) {
if (front == -1 && end == -1) {
data[++end] = val;
front++;
}
else if (!IsFull()) {
data[++end] = val;
}
else {
cout << "Stack Overflow" << endl;
}
} int Pop() {
return data[front++];
}
int Peek() {
return data[end];
}
bool IsEmpty() {
return front == -1 || front > end;
}
bool IsFull() {
return end == QueueSize - 1;
}
void List() {
if (!IsEmpty()) {
for (int i = front; i <= end; i++) {
cout << data[i] << "\t";
}
cout << endl;
}
else {
cout << "Stack is Empty !!" << endl;
}
}
void menu() {
int choice, val;
cout << "\n1->Enque\n2->Deque\n3->Peak\n4->List\n5->Exit" << endl;
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
cout << "Queue Is Empty " << endl;
break;
case 3:
if (!IsEmpty())
cout << "Peek value is " << Peek() << endl;
else
cout << "Queue Is Empty " << endl;
break;
case 4:
List();
break;
case 5:
exit(0);
}
while (choice != 5) {
menu();
}
}
};
int main() {
Queue q;
q.menu();
return 0;
}

*/