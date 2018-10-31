
public class ThirdFunctionOverloading {
	double area;
	public void findArea(int a) {
		this.area=a*a;
		System.out.println("Area of square is :"+this.area);
	}
	public void findArea(int a,int b) {
		this.area=a*b;
		System.out.println("Area of rectangle is :"+this.area);
	}
	public void sum(double a,double b) {
	 System.out.println("Sum Of int or flote is :"+(a+b));
	}
	public void sum(int a,int b) {
		 System.out.println("Sum Of int or int is :"+(a+b));
		}


	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ThirdFunctionOverloading obj = new ThirdFunctionOverloading();
		obj.findArea(5);
		obj.findArea(5, 6);
		obj.sum(5.5,96.66);
		obj.sum(5,6);

	}

}
/*3) Write a program that implements overloaded methods for each statement given 
 * below:Find area of either rectangle or square. [func(int, int) and func(int)]
 Find sum of two numbers(int or double). [calc(int, int) and calc(double, double)]
*/
