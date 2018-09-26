/*

#include<iostream>
#include<stdlib.h>
using namespace std;
#define Stacksize 20
class Stack {
int data[Stacksize];
int top;
int choice, val;
public:
Stack() : top(-1) {
}
void Push(int val) {
if (!IsFull())
data[++top] = val;
else
cout << "Stack Overflow" << endl;
} int Pop() {
return data[top--];
}
int Peek() {
return data[top];
}
bool IsEmpty() {
return top == -1;
}
bool IsFull() {
return top == Stacksize - 1;
}
void List() {
if (!IsEmpty())
for (int i = top; i >= 0; i--)
cout << data[i] << endl;
else
cout << "Stack is Empty !!" << endl;
}
void Swap() {
if (!IsEmpty()) {
int temp;
int top1 = top;
for (int i = 0; i <= (top / 2); i++) {
temp = data[i];
data[i] = data[top1];
data[top1] = temp;
top1--;
}
}
}
Stack operator+(Stack & st2) {
Stack st3;
int firstTop = this->top + 1;
int secondTop = st2.top + 1;
int total = firstTop + secondTop;
this->Swap();
st2.Swap();
for (int i = 0; i <= total; i++) {
if (this->IsEmpty() && st2.IsEmpty()) {
}
else if (this->IsEmpty()) {
st3.Push(st2.Peek());
st2.Pop();
}
else if (st2.IsEmpty()) {
st3.Push(this->Peek());
this->Pop();
}
else if (this->Peek() <= st2.Peek()) {
st3.Push(this->Peek());
this->Pop();
}
else if (this->Peek() > st2.Peek()) {
st3.Push(st2.Peek());
st2.Pop();
}
else if (this->Peek() == st2.Peek()) {
st3.Push(st2.Peek());
st3.Push(this->Peek());
st2.Pop();
this->Pop();
}
}
return st3;
}
void menu() {
cout << "\n1->Push\n2->Pull\n3->Peak\n4->List\n5->Swap\n6->Exit"
<< endl;
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
cout << Pop() << " Is Poped ." << endl;
else
cout << "Stack Is Empty" << endl;
break;
case 3:
if (!IsEmpty())
cout << Peek() << " Is Top Most Element ." << endl;
else
cout << "Stack Is Empty" << endl;
break;
case 4:
List();
break;
case 5:
Swap();
break;
case 6:
break;
default:
cout << "Invalid choice" << endl;
}
while (choice != 6) {
menu();
}
}
};
int main() {
Stack st1, st2, st3;
cout << "Fill data on first stack" << endl;
st1.menu();
cout << "Fill data on second stack" << endl;
st2.menu();
cout << "===============================================" << endl;
cout << "First Stack :" << endl;
st1.List();
cout << "\nSecond Stack :" << endl;
st2.List();
cout << "Mearge Stack is :" << endl;
st3 = st1 + st2;
st3.List();
cout << "===============================================" << endl;
return 0;
}


*/