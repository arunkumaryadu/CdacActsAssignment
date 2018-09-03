#include <iostream>
#include <string>
using namespace std;

class FindSubString{
public:
	std::string org, dup;
	int result = -1, i = 1;
	void getData(){
		    std::cout<<"Enter Original String:";
		    getline(std::cin, org);
		    std::cout<<"Enter Pattern String:";
		    getline(std::cin, dup);

	}
	void match(){

	       do
	    {
	        result = org.find(dup,result+1);
	        if (result != -1)
	            std::cout<<"\nInstance:"<<i<<"\tPosition:"<<result<<"\t";
	        i++;
	    } while (result >= 0);
	}

};

int main()
{   FindSubString obj;
     obj.getData();
     obj.match();
    return 0;
}
