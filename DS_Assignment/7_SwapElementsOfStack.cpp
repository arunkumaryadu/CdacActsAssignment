/*

#include<iostream>
#include<stdlib.h>
using namespace std;
#define Stacksize 5
class Stack {
int data[Stacksize];
int top;
public:
Stack() :top(-1) {
}
void Push(int val) {
if (!IsFull()) {
data[++top] = val;
cout << val << " is Pushed ." << endl;
}
else {
cout << "Stack Overflow" << endl;
}
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
else
cout << "Stack is Empty !!" << endl;
}
void menu() {
int choice, val;
cout << "\n1->Push\n2->Pull\n3->Peak\n4->List\n5->Swap\n6->Exit" << endl;
cout << "Enter your choice " << endl;
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
cout << Peek() << " Is Peek value ." << endl;
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
exit(0);
}
while (choice != 6) {
menu();
}
}
};
int main() {
Stack stk;
stk.menu();
return 0;
}

*/