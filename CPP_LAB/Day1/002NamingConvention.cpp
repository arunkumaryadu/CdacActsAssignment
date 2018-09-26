/*
//name mangling or name decoration
void fun1()        //?fun1@@YAXXZ
{
}
void fun1(int x)   //?fun1@@YAXH@Z
{
}
void fun1(double x)//?fun1@@YAXN@Z
{
}
void main002_1()
{
	fun1();//call	?fun1@@YAXXZ	
	fun1(10);//call	?fun1@@YAXH@Z
}


extern "C++" void fun2()        //
{
}
extern "C++" void fun2(int x)   //?fun2@@YAXXZ
{
}
extern "C++" void fun2(double x)//?fun2@@YAXH@Z
{
}

void main002_2()
{
	fun2();//?fun2@@YAXXZ
	fun2(100);//?fun2@@YAXH@Z
}


extern "C" void fun3()//_fun3
{
}

void main002_3()
{
	fun3();//call	_fun3
}
*/