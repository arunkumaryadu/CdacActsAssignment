/*

#include<iostream>
using namespace std;
struct mystruct
{
int i;
int j;
int val;
mystruct *next;
};
class sparsematrix {
private:
int m, n, val;
mystruct *head, *tail;
mystruct *createnode(int i, int j, int val) {
mystruct *temp = new mystruct();
temp->i = i;
temp->j = j;
temp->val = val;
temp->next = NULL;
return temp;
}
public:
sparsematrix() :head(NULL), tail(NULL) {
}
sparsematrix(int m, int n) :head(NULL), tail(NULL), m(m), n(n) {
}
void push(int i, int j, int val) {
mystruct *temp = createnode(i, j, val);
if (head == NULL) {
head = temp;
tail = temp;
}
else {
tail->next = temp;
tail = temp;
}
}
void putdata() {
cout << "enter row of matrix ..." << endl;
cin >> m;
cout << "enter coloumn of matrix ..." << endl;
cin >> n;
cout << "enter matrix element.." << endl;

for (int i = 0; i < m; i++) {
for (int j = 0; j < n; j++) {
cin >> val;
if (val != 0)
push(i, j, val);
}
}
}

void getdata() {
mystruct *temp = head;
cout << "your matrix is ....." << endl;
cout << "\n========================================" << endl;
for (int i = 0; i < m; i++) {
for (int j = 0; j < n; j++) {
if (temp != NULL && i == temp->i && j == temp->j) {
cout << temp->val;
temp = temp->next;
}
else {
cout << "0";
}
cout << "\t";
}
cout << "\n";
}
cout << "\n========================================" << endl;
}

void compactmatrix() {
mystruct *temp = head;
cout << "compact matrix is......" << endl;
cout << "\n========================================" << endl;
cout << "i" << "  " << "j" << "  " << "value" << endl;
cout << "\n----------------------------------------" << endl;
while (temp != NULL) {
cout << temp->i << "  " << temp->j << "  " << temp->val << endl;
temp = temp->next;
}
cout << "\n========================================" << endl;
}

sparsematrix operator + (sparsematrix & sm2) {
if (this->m != sm2.m || this->n != sm2.n) {

cout << "order of both matrix should be same for addition !!!!!" << endl;
exit(0);

}
else {
sparsematrix sm3(this->m, this->n);
mystruct *trav1, *trav2;
trav1 = this->head;
trav2 = sm2.head;
while (trav1 != NULL || trav2 != NULL) {
if (trav1 != NULL && trav2 != NULL && trav1->i == trav2->i && trav1->j == trav2->j) {
cout << "1";
sm3.push(trav1->i, trav1->j, trav1->val + trav2->val);
trav1 = trav1->next;
trav2 = trav2->next;
}
else if (trav1 == NULL) {
cout << "3";
sm3.push(trav2->i, trav2->j, trav2->val);
trav2 = trav2->next;
}
else if (trav2 == NULL) {
cout << "4";
sm3.push(trav1->i, trav1->j, trav1->val);
trav1 = trav1->next;
}
else if (trav1 != NULL && trav2 != NULL && ((trav1->i) <= (trav2->i))) {
cout << "5";
sm3.push(trav1->i, trav1->j, trav1->val);
trav1 = trav1->next;

}
else if (trav1 != NULL && trav2 != NULL && ((trav2->i) <= (trav1->i))) {
cout << "6";
sm3.push(trav2->i, trav2->j, trav2->val);
trav2 = trav2->next;
continue;
}
else {
break;
}
cout << "in while loop" << endl;
}


return sm3;
}


}

};
int main() {
sparsematrix sm1, sm2, sm3;
sm1.putdata();
sm2.putdata();
sm3 = sm1 + sm2;
sm1.getdata();
sm2.getdata();
sm3.getdata();
sm1.compactmatrix();
sm2.compactmatrix();
sm3.compactmatrix();
return 0;
}

*/