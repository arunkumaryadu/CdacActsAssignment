#include<iostream>
using namespace std;


class CA
{
public:
	CA()//setvptr(CA::Vftable)
	{
	}
	virtual void fun()
	{
		cout<<"\t\CA::fun"<<endl;
	}
	void DoJob()
	{
		cout<<"\t\CA::DoJob"<<endl;
	}
};
class CB:public CA
{
	public:
	CB()
		//Call CA::CA()
		////setvptr(CB::Vftable)
	{
	}
	virtual void fun()
	{
		cout<<"\t\CB::fun"<<endl;
	}
	void DoJob()
	{
		cout<<"\t\CB::DoJob"<<endl;
	}
};

void main1()
{
	CA obj1;
	long*vt=(long*)*(long*)&obj1;
	cout<<"CA::VFTABLE="<<vt<<endl;
	((void(__stdcall *)())vt[0])();
	CB obj2;
	vt=(long*)*(long*)&obj2;
	cout<<"CB::VFTABLE="<<vt<<endl;
	((void(__stdcall *)())vt[0])();
}

void main()
{
	CB obj1;
	CA *objPtr=&obj1;//LSP
	objPtr->fun();//objPtr->Vptr->Vtable[0]();
	/*
		mov	eax, DWORD PTR _objPtr$[ebp]
		mov	edx, DWORD PTR [eax]
		mov	esi, esp
		mov	ecx, DWORD PTR _objPtr$[ebp]
		mov	eax, DWORD PTR [edx]
		call	eax
		cmp	esi, esp
		call	__RTC_CheckEsp
	*/
	objPtr->DoJob();
	/*
		mov	ecx, DWORD PTR _objPtr$[ebp]
		call	?DoJob@CA@@QAEXXZ			; CA::DoJob

	*/

	objPtr->CA::CA();
	objPtr->fun();
	/*
		mov	eax, DWORD PTR _objPtr$[ebp]
		mov	edx, DWORD PTR [eax]
		mov	esi, esp
		mov	ecx, DWORD PTR _objPtr$[ebp]
		mov	eax, DWORD PTR [edx]
		call	eax
		cmp	esi, esp
		call	__RTC_CheckEsp

	*/

}