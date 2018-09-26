/*

#include<iostream>
#include<string>
using namespace std;
class Stack {
private:
int top;
char data[25];
public:
Stack() : top(-1) {
}
void push(char str) {
if (!IsFull()) {
data[++top] = str;
}
else {
cout << "Stack overflow" << endl;
}
}
char pop() {
if (!IsEmpty()) {
return data[top--];
}
else {
cout << "Stack underflow" << endl;
}
}
bool IsEmpty() {
return top == -1;
}
bool IsFull() {
return top == 24;
}
void list() {
for (int i = top; i >= 0; i--) {
cout << pop();
}
}
};
int main() {
string str;
cout << "Enter Your String" << endl;
getline(cin, str);
cout << endl;
Stack st1, st2, st3;
int len = str.length();
for (int i = 0; i < len; i++) {
if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
st1.push(str[i]);
}
else if (str[i] >= '0' && str[i] <= '9') {
st2.push(str[i]);
}
else {
st3.push(str[i]);
}
}
st1.list();
cout << endl;
st2.list();
cout << endl;
st3.list();
cout << endl;
return 0;
}

*/