#include<iostream>
using namespace std;
namespace nm020
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
		Complex(Complex & par):_real(par._real),_imag(par._imag)
		{
			cout<<"Copy called "<<endl;
		}
		Complex  operator+(Complex & par)
		{
			return Complex(this->_real+par._real,this->_imag+par._imag);
		}
		Complex  operator+(int  par)
		{
			return Complex(this->_real,this->_imag+par);
		}
		friend ostream & operator<<(ostream & os,Complex & comp)
		{
			os<<comp._real<<(comp._imag>=0?"+":"")<<comp._imag<<"i"<<endl;
			return os;
		}
		friend Complex  operator+(int  par,const Complex & cpar)
		{
			return Complex(cpar._real+par,cpar._imag);
		}
		Complex& operator=(double value)
		{
			this->_real=this->_imag=value;
			return *this;
		}
		operator double()
		{
			return this->_real+this->_imag;
		}
	};

}


void main020()
{
	using namespace nm020;
	Complex c1(12.34,11.23);
	Complex c2(10.22,15.46);
	Complex c3=c1+c2;
	cout<<c1;
	cout<<c2;
	cout<<"________________"<<endl;
	cout<<c3;
	cout<<"________________"<<endl;
	Complex c4=c1+10;//10 to be added to the imaginary
	Complex c5=10+c2;//10 to be added to the real
	c3=123.45;//this value to assigned to real and imag
	double magnitude=c5;//magnitude should accept real+imag
	cout<<c4<<c5<<c3<<magnitude<<endl;
	
}