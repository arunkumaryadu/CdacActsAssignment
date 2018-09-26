#include<iostream>
using namespace std;
namespace nm019
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
		/*Complex  AddComp(Complex & par)
		{
			cout<<"________________________"<<endl;
			Complex temp(this->_real+par._real,this->_imag+par._imag);
			return temp;
		}*/

		/*Complex  AddComp(Complex & par)
		{
			return Complex(this->_real+par._real,this->_imag+par._imag);
		}*/
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
	};

}


void main19()
{
	using namespace nm019;
	Complex c1(12.34,11.23);
	Complex c2(10.22,15.46);
	//Complex c3=c1.AddComp(c2);
	Complex c3=c1.operator+(c2);
	Complex c4=c1+c2;
	cout<<c1<<c2<<"________________\n"<<c4;

	Complex c5=c1+10;//10 to be added to the imaginary
	cout<<c5;


}