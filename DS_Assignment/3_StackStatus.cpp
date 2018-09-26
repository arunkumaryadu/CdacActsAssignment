/*
#include<iostream>
using namespace std;
class StackException : public exception {
public:
StackException(char *expMsg) : exception(expMsg) {
}
};
class Stack {
int data[5];
int top;
bool arr[4];
public:
Stack() : top(-1) {
}
void Push(int val) {
if (!IsFull()) {
data[++top] = val;
}
else {
throw StackException("Stack Overflow");
}
} int Pop() {
if (!IsEmpty()) {
return data[top--];
}
else {
throw StackException("Stack UnderFlow");
}
}
int Peek() {
if (!IsEmpty()) {
return data[top];
}
else {
throw StackException("Stack is Empty");
}
}
bool IsEmpty() {
return top == -1;
}
bool IsFull() {
return top == 4;
}
void List() {
for (int i = top; i >= 0; i--) {
cout << data[i] << endl;
}
}
bool CheckA() {
for (int i = 0; i < top; i++) {
if (!(data[i] <= data[i + 1])) {
return false;
}
else {
arr[i] = true;
}
}
for (int i = 0; i < 4; i++) {
if (!(arr[i] == true)) {
return false;
}
else {
return true;
}
}
}
bool CheckD() {
for (int i = 0; i < top; i++) {
if ((data[i] <= data[i + 1])) {
return false;
}
else {
arr[i] = true;
}
}
for (int i = 0; i < 4; i++) {
if (!(arr[i] == true)) {
return false;
}
else {
return true;
}
}
}
void CheckStackStatus() {
if (CheckA()) {
cout << "Stack is in ascending order" << endl;
}
else if (CheckD()) {
cout << "Stack is in Descending order" << endl;
}
else if (!CheckA() || !CheckD()) {
cout << "Stack is in Random order" << endl;
}
}
};
void Menu() {
cout << "P->Push\nO->Pop\nE->Peek\nL->List\nC->Check Stack Status \nX->Exit\nPlz enter your choice : ";
}
void main() {
Menu();
char ch;
int val;
Stack stk;
while ((ch = getchar()) != 'x') {
cin.ignore(numeric_limits<streamsize>::max(), '\n');
try {
switch (ch) {
case 'P':
case 'p':
cout << "Enter the value to be pushed ";
cin >> val;
fflush(stdin);
stk.Push(val);
break;
case 'O':
case 'o':
val = stk.Pop();
cout << "The poped element is " << val << endl;
break;
case 'E':
case 'e':
val = stk.Peek();
cout << "The top element is " << val << endl;
break;
case 'L':
case 'l':
stk.List();
break;
case 'C':
case 'c':
stk.CheckStackStatus();
break;
default:
cout << "Please Enter Valid choice !!!" << endl;
Menu();
break;
};
}
catch (StackException & exp) {
cout << exp.what() << endl;
}
}
}


*/