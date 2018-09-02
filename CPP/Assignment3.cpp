//============================================================================
// Name        : Assignment3.cpp
// Author      : Arun kumar
// Copyright   : understand before copy
// Description : Total number of heads and legs are given than find how many
                 goat and duck are present.
//============================================================================

#include <iostream>
using namespace std;

class Animal{
private:
	int head,leg,duck,goat;
	float d,g,diff1,diff2;
public:
	void input(){
		cout<<"Enter Number of Head And Legs "<<endl;
		cin>>head>>leg;
		if(head<0 || leg<0){
			cout<<"Please Enter Positive head and leg !!!"<<endl;
			this->input();
		}
	}
	void Calculation(){
		g=(leg-(2*head))/2;
		d = (2*head)-(leg/2);
		goat=(leg-(2*head))/2;
		duck = (2*head)-(leg/2);

		diff1=g-goat;
		diff2=d-duck;
	}
	void Display(){
		if(diff1!=0 || diff2!=0 || goat<0 || duck<0){
			cout<<"Please enter valid Number of head and legs !!!"<<endl;
			this->input();
		}
		else{
			cout<<"Number of Goat = "<<goat<<endl;
			cout<<"Number of Duck = "<<duck<<endl;
		}
	}
};

int main() {
	Animal a;
	a.input();
	a.Calculation();
	a.Display();
	return 0;
}
