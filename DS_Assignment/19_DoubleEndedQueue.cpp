//
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//struct MyStruct {
//int data;
//MyStruct *next;
//};
//class DoubleEndedQueue {
//MyStruct *head;
//MyStruct *CreateNode(int val) {
//MyStruct *temp = new MyStruct();
//temp->data = val;
//temp->next = NULL;
//return temp;
//}
//public:
//DoubleEndedQueue() :
//head(NULL) {
//}
//void menu() {
//int choice, pos, val;
//cout << "\n===================================================================" << endl;
//cout << "Please Enter Your choice" << endl;
//cout << "1->Push at start\n2->Push At last"<< endl;
//cout << "3->Delete From Start\n4->Delete From Last" << endl;
//cout << "5->Show List\n6->Show total nodes\n7->Exit" << endl;
//cin >> choice;
//cout << "\n===================================================================" << endl;
//switch (choice) {
//case 1:
//cout << "Enter a value to be Pushed ..." << endl;
//cin >> val;
//EnquePos(val, 0);
//cout << val << " is pushed At First" << endl;
//break;
//case 2:
//cout << "Enter a value to be Pushed ..." << endl;
//cin >> val;
//EnquePos(val, totalnode());
//cout << val << " is pushed At last" << endl;
//break;
//case 3:
//if (IsEmpty())
//cout << "UnderFlow" << endl;
//else
//cout << DequePos(0) << " is pop At first position " << endl;
//break;
//case 4:
//if (IsEmpty())
//cout << "UnderFlow" << endl;
//else
//cout << DequePos(totalnode()) << " is pop at last position " << endl;
//break;
//case 5:
//List();
//break;
//case 6:
//cout << "Total Number of nodes is " << totalnode() << endl;
//break;
//case 7:
//cout << "******************************************" << endl;
//while (totalnode() != 0) {
//cout << DequePos(0) << " ";
//}
//cout << "\n******************************************" << endl;
//exit(0);
//default:
//cout << "\nPlease Enter Valid Choice" << endl;
//break;
//}
//while (choice != 7) {
//menu();
//}
//}
//void EnquePos(int val, int pos) {
//MyStruct *temp = CreateNode(val);
//if (IsEmpty()) {
//head = temp;
//}
//else if (pos == 0) {
//temp->next = head;
//head = temp;
//}
//else {
//MyStruct *trav = head;
//int i = 1;
//while (trav != NULL) {
//if (i == pos) {
//temp->next = trav->next;
//trav->next = temp;
//break;
//}
//trav = trav->next;
//i++;
//}
//}
//}
//int DequePos(int pos) {
//int val = -1;
//MyStruct *temp = head;
//if (totalnode() == 1 && pos == 0) {
//val = head->data;
//head = NULL;
//delete temp;
//}
//else if (pos == 0) {
//val = head->data;
//head = head->next;
//delete temp;
//}
//else {
//MyStruct *trav = head;
//for (int i = 0; i < (pos - 2); i++, trav = trav->next);
//val = trav->next->data;
//temp = trav->next;
//trav->next = temp->next;
//delete temp;
//}
//return val;
//}
//bool IsEmpty() {
//return head == NULL;
//}
//void List() {
//if (IsEmpty()) {
//cout << "List is empty" << endl;
//}
//else {
//for (MyStruct *trav = head; trav != NULL; trav = trav->next) {
//cout << trav->data << "\t";
//}
//}
//}
//void LinkListRev() {
//if (IsEmpty() || head->next == NULL) {
//cout << "List is empty Or List have only one element !!" << endl;
//}
//else {
//MyStruct *newHead = NULL;
//MyStruct *newTrav = head;
//MyStruct *newTail = head;
//while (newTrav != NULL) {
//newTail = newTrav->next;
//newTrav->next = newHead;
//newHead = newTrav;
//newTrav = newTail;
//}
//head = newHead;
//}
//} int totalnode() {
//int i = 0;
//if (!IsEmpty()) {
//for (MyStruct *trav = head; trav != NULL; ++i, trav = trav->next);
//}
//return i;
//}
//~DoubleEndedQueue() {
//cout << "******************************************" << endl;
//while (!IsEmpty()) {
//cout << DequePos(1) << " ";
//}
//cout << "\n******************************************" << endl;
//}
//};
//int main() {
//DoubleEndedQueue q;
//q.menu();
//return 0;
//}
//
