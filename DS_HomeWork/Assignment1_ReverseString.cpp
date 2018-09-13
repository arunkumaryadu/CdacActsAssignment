/*


#include<iostream>
#include<string>
using namespace std;
class Stack {
private:
int top;
string data[25];

public:
Stack() :top(-1) {

}
void push(char* str) {
if (!IsFull()) {
//cout << "Enter element to be pushed" << endl;
//cin >> data[++top];
data[++top] = (string)str;
}
else {
cout << "Stack overflow" << endl;
}
}
string pop() {
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
void WordRev() {
for (int i = --top; i >= 0; i--) {
cout << pop();
}

}
};
int main() {
string str;
cout << "Enter Your String" << endl;
getline(cin, str);
cout << endl;
Stack st;
int len = str.length();
int j = 0, start = 0;

while (j <= len)
{
if (str[j] == ' ' || str[j] == '\0') {
str[j] = '\0';
char *ptr = &str[start];
st.push(ptr);
st.push(" ");
start = j + 1;
}
j++;
}
st.WordRev();
return 0;
}



*/