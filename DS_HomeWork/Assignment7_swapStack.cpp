#include<iostream>
#include<stack>
using namespace std;
class Swap{
private:
	stack<int> st;
	int choice,val;
public:
	void menu(){
		cout<<"\n1->Push\n2->Pull\n3->Peak\n4->List\n5->Swap\n6->Exit"<<endl;
		cout<<"Enter your choice \n"<<endl;
		cin>>choice;
		switch(choice){
		case 1:
			cout<<"Enter Value to be pushed"<<endl;
			cin>>val;
			st.push(val);
			break;
		case 2:
			val=st.top();
			st.pop();
			break;
		case 3:
			cout<<st.top();
			break;
		case 4:
			showstack(st);
			break;
		case 5:
			st=swapstack(st);
			break;
		case 6:
			break;
		}
		while(choice!=6){
			menu();
		}
	}
	void showstack(stack <int> g)
	{
	    while (!g.empty())
	    {
	        cout << '\t' << g.top();
	        g.pop();
	    }
	    cout << '\n';
	}
	stack<int> swapstack(stack <int> st1)
	{
	    stack <int> g;
	    while(!st1.empty()){
	    	g.push(st1.top());
	    	st1.pop();
	    }
	    return g;
	}
};

int main(){
	Swap s;
	s.menu();

return 0;
}
