#include<iostream>
using namespace std;
namespace nm043
{
typedef void (*FPTR)();
void VendorBusiness(FPTR fp)
{
	cout<<"Vendor Business started"<<endl;
	fp();//callback
	cout<<"Vendor Business completed"<<endl;
}

//------------------------

void ClientFun()
{
	cout<<"Hi from client "<<endl;
}
int main()
{
    FPTR fp=&ClientFun;
	VendorBusiness(fp);
    return 0;
}
}