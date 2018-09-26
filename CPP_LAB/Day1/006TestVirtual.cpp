
namespace nm006
{
class CA
{
public:
	virtual void fun1()
	{

	}
	void fun2()
	{

	}
};

void main()
{
	CA obj;
	CA &objRef=obj;
	CA *objPtr=&obj;
	obj.fun2();
	/*
		lea	ecx, DWORD PTR _obj$[ebp]
		call	?fun2@CA@@QAEXXZ			; CA::fun2
	*/
	objRef.fun2();
	/*
		lea	ecx, DWORD PTR _objRef$[ebp]
		call	?fun2@CA@@QAEXXZ			; CA::fun2
	*/
	objPtr->fun2();
	/*
		mov	ecx, DWORD PTR _objPtr$[ebp]
		call	?fun2@CA@@QAEXXZ			; CA::fun2
	*/
	obj.fun1();
	/*
		lea	ecx, DWORD PTR _obj$[ebp]
		call	?fun1@CA@@UAEXXZ			; CA::fun1
	*/
	objRef.fun1();//objPtr.vptr->vtable[0]()
	/*
		mov	eax, DWORD PTR _objRef$[ebp]
		mov	edx, DWORD PTR [eax]
		mov	esi, esp
		mov	ecx, DWORD PTR _objRef$[ebp]
		mov	eax, DWORD PTR [edx]
		call	eax
		cmp	esi, esp
		call	__RTC_CheckEsp
	*/
	objPtr->fun1();//objPtr->vptr->vtable[0]()
	
		/*mov	eax, DWORD PTR _objPtr$[ebp]
		mov	edx, DWORD PTR [eax]
		mov	esi, esp
		mov	ecx, DWORD PTR _objPtr$[ebp]
		mov	eax, DWORD PTR [edx]
		call	eax
		cmp	esi, esp
		call	__RTC_CheckEsp*/
	

}
}