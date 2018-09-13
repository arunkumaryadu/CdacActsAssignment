
#include<iostream>
#include<string>
using namespace std;
struct MyStruct
{
 int topy;
	int data[5];
	MyStruct *ptr;
	MyStruct *pt;
	MyStruct() :ptr(NULL)
	{
	}


};

class BaseStack {
public:
	static int top;
	int count;
	bool IsEmpty() {
		return top == -1;
	}
	bool IsFull() {
	return top == 4;
		
	}
	void list() {
		///*for (int i = obj1.top; i >= 0; i--) {
		//	cout << pop();*/
		//}

	}
};
class Stack : public BaseStack,MyStruct {

	
public:
	MyStruct obj1;
	Stack(){
		
		top = -1;
		obj1.pt = &obj1;
	}
	
	

	void push(int x) {
		if (!IsFull()) {
			//cout << "Enter element to be pushed" << endl;
			//cin >> data[++top];
			pt->data[++(top)] = x;
		}

		else if (IsFull() && (obj1.ptr == NULL))
		{
			obj1.ptr = new MyStruct();
		
		 if ((obj1.ptr != NULL))
		{
			obj1.ptr->data[++(top)] = x;
		}
	}
		//else {}
	
	int pop() {
		if (!IsEmpty()) {
			return obj1.data[top--];
		}
		else {
			cout << "Stack underflow" << endl;
		}

	}
	
};
void Menu()
{
	cout << "P->Push\nO->Pop\nE->Peek\nL->List\nX->Exit\nPlz enter your choice : ";

}
int main() {

	
	char ch;
	int y, val;
	Stack *st = new Stack();
	Menu();
	while ((ch = getchar()) != 'x')
	{
		fflush(stdin);
				
		switch (ch)
		{
		case 'P':
		case 'p':			
				cout << "Enter Your data" << endl;
				cin >> y;
				fflush(stdin);
				st->push(y);			
			    break;
		case 'O':
		case 'o':
			val = st->pop();
			cout << "The poped element is " << val << endl;
			break;
		case 'L':
		case 'l':
			st->list();
			break;
		default:
			cout << "Please Enter Valid choice !!!" << endl;
			Menu();
			break;
		}
	}
	
	return 0;
}



