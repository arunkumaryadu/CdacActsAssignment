/*

#include<iostream>
#include<stack>
#include<cmath>
#include<string>
using namespace std;
class InfixToPostfix {
private:
string infixExpression, postfixExpression, prefixExpression;
int resultPost, resultPre;
public:
void InputData() {
infixExpression = "(1+(2^3)*4)/5"; //"(A+(B^C)*D)/C" 123^4*+3/
}
void ConversionEvalution() {
postfixExpression = convertInfixToPostfix(infixExpression);
prefixExpression = convertInfixToPrefix(infixExpression);
string infixexp = prefixExpression;
reverse(infixexp.begin(), infixexp.end());
resultPost = evaluatePostfixExpression(postfixExpression);
resultPre = evaluatePrefixExpression(infixexp);
}
void ShowData() {
cout << "Infix Expression: " << infixExpression << endl;
cout << "Postfix Expression: " << postfixExpression << endl;
cout << "Prefix Expression: " << prefixExpression << endl;
cout << "\nResult Of Postfix is: " << resultPost << endl;
cout << "\nResult Of Prefix is: " << resultPre << endl;
}
string convertInfixToPostfix(string infix) {
string postfix = "";
stack<char> myStack;
char ch;
for (int i = 0; infix[i]; i++) {
ch = infix[i];
if (ch == '(')
myStack.push(ch);
else if (ch == ')')
{
while (!myStack.empty() && myStack.top() != '(') {
postfix = postfix + myStack.top();
myStack.pop();
}
if (!myStack.empty() && myStack.top() == '(')
myStack.pop();
}
else //found operator or operand
{
int priority = operatorPrecedence(ch);
if (priority == 0)
postfix = postfix + ch;
else //found operator
{
if (myStack.empty())
myStack.push(ch);
else {
while (!myStack.empty() && myStack.top() != '('
&& priority <= operatorPrecedence(myStack.top())) {
postfix = postfix + myStack.top();
myStack.pop();
}
myStack.push(ch);
}
}
}
}
while (!myStack.empty()) {
postfix += myStack.top();
myStack.pop();
}
return postfix;
}
string convertInfixToPrefix(string infix) {
string prefix = "";
int len = infix.length();
reverse(infix.begin(), infix.end());
for (int i = 0; i < len; i++) {
if (infix[i] == ')') {
infix[i] = '(';
i++;
}
if (infix[i] == '(') {
infix[i] = ')';
i++;
}
}
prefix = convertInfixToPostfix(infix);
reverse(prefix.begin(), prefix.end());
return prefix;
}
int evaluatePostfixExpression(string postfix) {
stack<int> myStack;
char ch;
for (int i = 0; postfix[i] != '\0'; i++) {
ch = postfix[i];
if (ch >= '0' && ch <= '9') //found operand
myStack.push(ch - '0'); //char to int conversion
else //found operator
{
int a, b;
b = myStack.top();
myStack.pop();
a = myStack.top();
myStack.pop();
myStack.push(calculate(a, b, ch));
}
}
return myStack.top();
}
int evaluatePrefixExpression(string postfix) {
stack<int> myStack;
char ch;
for (int i = 0; postfix[i] != '\0'; i++) {
ch = postfix[i];
if (ch >= '0' && ch <= '9') //found operand
myStack.push(ch - '0'); //char to int conversion
else //found operator
{
int a, b;
b = myStack.top();
myStack.pop();
a = myStack.top();
myStack.pop();
myStack.push(calculate(b, a, ch));
}
}
return myStack.top();
}
int calculate(int a, int b, char operatorSign) {
if (operatorSign == '+')
return a + b;
else if (operatorSign == '-')
return a - b;
else if (operatorSign == '*')
return a * b;
else if (operatorSign == '/')
return a / b;
else if (operatorSign == '^')
return pow(a, b);
}
int operatorPrecedence(char ch) {
if (ch == '^')
return 3;
else if (ch == '/' || ch == '*')
return 2;
else if (ch == '+' || ch == '-')
return 1;
else
return 0;
}
};
int main() {
InfixToPostfix itp;
itp.InputData();
itp.ConversionEvalution();
itp.ShowData();
return 0;
}

*/