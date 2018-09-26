/*

#include<iostream>
using namespace std;
class PacketArray {
int _top, _packet;
int data[5][5];
public:
PacketArray() :_top(-1), _packet(-1) {
}
bool IsPackeFull() { return _packet == 4; }
bool IsArrayFull() { return _top == 4; }
bool IsPackeEmpty() { return _packet == -1; }
bool IsArrayEmpty() { return _top == -1; }
void Increment() {
_top++;
if (_packet<0) _packet++;
if (_top == 5) {
_top = 0;
_packet++;
}
}
void Decrement() {
_top--;
if (_packet<0) _packet++;
if (_top == -1) {
_top = 4;
_packet--;
}
}
void Push(int value) {
if (IsPackeFull() && IsArrayFull()) {
cout << "Stack Overflow" << endl;
}
else {
Increment();
data[_packet][_top] = value;
}
}
int Pop() {
int value;
if (IsPackeEmpty()) {
cout << "Stack Underflow" << endl;
}
else {
value = data[_packet][_top];
cout << "\nPop value is =" << value;
Decrement();
}
return value;
}
int Peek() {
return data[_packet][_top];
}
void List() {
cout << "*************************" << endl;
if (IsPackeEmpty())
{
cout << "List is Empty" << endl;
}
else {
int temptop = _top;
for (int i = _packet; i >= 0; i--) {
cout << "Packet is " << i + 1 << endl;
for (int j = temptop; j >= 0; j--) {
cout << data[i][j] << endl;
}
temptop = 4;
}
}
cout << "*************************" << endl;
}
~PacketArray() {
while (!IsPackeEmpty())
Pop();
}
};
int Menu() {
int ch;
cout << "\n1.Push\t2.Pop\t3.Peek\t4.List\t5.Exit\nEnter your choice = ";
cin >> ch;
return ch;
}
int main() {
int value, choice = 0;
PacketArray objPacket;
while (choice != 5) {
cout << "\n1.Push\t2.Pop\t3.Peek\t4.List\t5.Exit\nEnter your choice = ";
cin >> choice;
switch (choice) {
case 1:
cout << "Enter value = ";
cin >> value;
objPacket.Push(value);
break;
case 2:
objPacket.Pop();
break;
case 3:
value = objPacket.Peek();
cout << "Peek value is = " << value << endl;
break;
case 4:
objPacket.List();
break;
case 5:
break;
default:
cout << "Invail choice" << endl;
break;
}
}
return 0;
}

*/