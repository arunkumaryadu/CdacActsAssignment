#include<iostream>
using namespace std;
namespace nm018
{
	class Complex
	{
	private:
		double _real;
		double _imag;
		
	public:
		Complex():_real(0.0),_imag(0.0)
		{
		}
		Complex(double real,double imag):_real(real),_imag(imag)
		{
		}
		/*friend ostream & Display(Complex & comp,ostream & os)
		{
			os<<comp._real<<(comp._imag>=0?"+":"")<<comp._imag<<"i"<<endl;
			return os;
		}*/
		/*friend ostream & Show(Complex & comp,ostream & os)
		{
			os<<comp._real<<(comp._imag>=0?"+":"")<<comp._imag<<"i"<<endl;
			return os;
		}*/
		/*friend ostream & operator<<(Complex & comp,ostream & os)
		{
			os<<comp._real<<(comp._imag>=0?"+":"")<<comp._imag<<"i"<<endl;
			return os;
		}*/
		friend ostream & operator<<(ostream & os,Complex & comp)
		{
			os<<comp._real<<(comp._imag>=0?"+":"")<<comp._imag<<"i"<<endl;
			return os;
		}
	};
	
	/*void Display(Complex & comp)
	{
		cout<<comp._real<<(comp._imag>=0?"+":"")<<comp._imag<<"i"<<endl;
	}*/
}


void main18()
{
	using namespace nm018;
	Complex c1(12.34,11.23);
//	Display(c1,cout)<<"India is great"<<endl;;
	//Show(c1,cout)<<"India is great"<<endl;;
	// operator<<(c1,cout)<<"India is great"<<endl;;
	 //c1<<cout<<"India is great"<<endl;;
	cout<<c1<<"India is great"<<endl;;
}