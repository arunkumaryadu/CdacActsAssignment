//============================================================================
// Name        : Assignment2.cpp
// Author      : Arun kumar
// Copyright   : understand before copy
// Description : find those number whose factorial is equal to sum of factorial 
//                  of each digit of that number.
//============================================================================

#include <iostream>
using namespace std;
class A{
private:
	int a,i=1,rem,sum,count=0;
public:
	int fact(int n){
		if(n<=1){
			return 1;
		}
		return n*fact(n-1);
	}
	int cal(){
		while(i){
			sum=0;
			a=i;

			while(1){
				if(a<1)
					break;
				rem=a%10;
				sum=sum+fact(rem);
				a=a/10;
						}
			if(i==sum){
				count++;
				cout<< i <<"!  = "<<sum<<endl;
							}
			if(count==4){
				break;
			}

			i++;
		}
	}

};

int main() {
	A a;
	a.cal();
	return 0;
}
