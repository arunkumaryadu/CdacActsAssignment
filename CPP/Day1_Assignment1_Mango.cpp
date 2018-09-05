//============================================================================
// Name        : Assignment1.cpp
// Author      : Arun kumar
// Copyright   : understand before copy
//============================================================================

#include <iostream>
using namespace std;
class Mango{
private:
	int  Rem_mango,total_mango;
	static int cur_mango;
public:
	int Get_input(){
		cout<<"Enter total number of mangos ";
		cin>>this->total_mango;
		return total_mango;
	}

	int Divide(){

		Rem_mango = total_mango % 3;
		total_mango = (total_mango/3)*2;
		return Rem_mango;


	}

};

int main() {
	Mango m;
	int x,n;
	n=m.Get_input();
			if(n<3){
				cout<<"Please Enter greater than 3 value "<<endl;
			}
			else{

				 x=m.Divide();
					if(x==1){
				         x=m.Divide();
				         if(x==1){
				        	 x=m.Divide();
				        	 if(x==1){
				        		 x=m.Divide();
				        				 if(x==0){
				        					 cout<<" All Condition are successfully satisfied !!! \n Father equally distribute remaining mangos !!!"<<endl;
				        				 }
				        				 else{
				        					 cout<<"When father distribute remaining mangos after that "<<x<<" mango still remaining"<<endl;
				        				 }
				        	 }
				        	 else{
				        	 		cout<<"When Third child divide(arrived) mangos then "<<x<<" mango remaining."<<endl;
				        	 	}
				         }
				         else{
				         		cout<<"When Second child divide(arrived) mangos then "<<x<<" mango remaining."<<endl;
				         	}
					}
					else{
						cout<<"When First child divide mangos then "<<x<<" mango remaining."<<endl;
					}
			}

	return 0;
}
