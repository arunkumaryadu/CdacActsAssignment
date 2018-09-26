namespace nm003
{
	//function stack frames
void fun(int x,int y)
{
	
}//ret	0

void main003_1()
{
	fun(10,20);
	/*
		push	20					; 00000014H
		push	10					; 0000000aH
		call	?fun@@YAXHH@Z				; fun
		add	esp, 8
	*/
	fun(11,22);
	/*
	push	22					; 00000016H
	push	11					; 0000000bH
	call	?fun@@YAXHH@Z				; fun
	add	esp, 8
	*/
}

void  __cdecl fun1(int x,int y)
{
	
}//ret	0
void  __stdcall fun2(int x,int y)
{
	
}//ret	8
void __fastcall fun3(int x,int y)
{

}//ret	0

class CA
{
public:
	void fun4()//fun4@CA@@QAEXXZ
	//_this$ = ecx
	{
	}
	void __thiscall fun5()
	{
	}
};
void main()
{
	fun1(10,20);
	/*
	push	20					; 00000014H
	push	10					; 0000000aH
	call	?fun1@@YAXHH@Z				; fun1
	add	esp, 8
	*/
	fun2(111,222);
	/*
	push	222					; 000000deH
	push	111					; 0000006fH
	call	?fun2@@YGXHH@Z				; fun2

	*/
	fun3(123,456);
	/*
		mov	edx, 456				; 000001c8H
		mov	ecx, 123				; 0000007bH
		call	?fun3@@YIXHH@Z				; fun3
	*/
	CA obj;
	obj.fun4();
	/*
	lea	ecx, DWORD PTR _obj$[ebp]
	call	?fun4@CA@@QAEXXZ			; CA::fun4

	*/
}
}