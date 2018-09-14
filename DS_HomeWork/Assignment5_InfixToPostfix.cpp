/* C++ implementation to convert infix expression to postfix*/
// Note that here we use std::stack  for Stack operations
#include<bits/stdc++.h>
using namespace std;
class InToPost {
private:
	std::stack<char> st;
	string ps;

	int prec(char c) {
		if (c == '^')
			return 3;
		else if (c == '*' || c == '/')
			return 2;
		else if (c == '+' || c == '-')
			return 1;
		else
			return -1;
	}
public:
	void infixToPostfix(string s) {
		int len = s.length();
		for (int i = 0; i < len; i++) {
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
				ps = ps + s[i];

		else if(s[i] == '('){
			st.push('(');

		}

		else if(s[i] == ')')
		{
			while(!(st.empty()) && st.top() != '(')
			{
				char c = st.top();
				st.pop();
				ps += c;
			}
			if(st.top() == '(')
			{
				char c = st.top();
				st.pop();
			}
		}

		else {
			while(!(st.empty()) && prec(s[i]) <= prec(st.top()))
			{
				char c = st.top();
				st.pop();
				ps += c;
			}
			st.push(s[i]);
		}  }
		while (!(st.empty())) {
			char c = st.top();
			st.pop();
			ps += c;
		}

		cout << ps << endl;

	}
};

int main() {
	InToPost obj;
	string exp = "a+b*(c^d-e)^(f+g*h)-i";
	obj.infixToPostfix(exp);
	return 0;
}
