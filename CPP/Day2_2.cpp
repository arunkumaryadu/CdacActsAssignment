#include <iostream>
using namespace std;

class StrWordRev{

public:
	string str;
	void getData(){
		cout<<"Enter Any String"<<endl;
		std::getline(std::cin,str);
	}
	void printReverse()
	{
	    int length = str.length();

	    // Traverse string from end
	    int i;
	    for (i = length - 1; i >= 0; i--) {
	        if (str[i] == ' ') {

	            str[i] = '\0';

	            // Start from next charatcer
	            char *ptr = &(str[i]) + 1;
	            cout<<ptr<<" ";
	        }
	    }

	    // printing the last word

	    cout<<str<<endl;
	}

};

int main()
{
    StrWordRev obj;
	obj.getData();
    obj.printReverse();
    return 0;
}
