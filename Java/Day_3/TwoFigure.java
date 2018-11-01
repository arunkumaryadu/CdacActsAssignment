abstract class Figure{
	double dim1,dim2;
	public Figure(double dim1,double dim2) {
		this.dim1=dim1;
		this.dim2=dim2;
	}	
	abstract public void area() ;
}
class Rectangle extends Figure{

	public Rectangle(double dim1, double dim2) {
		super(dim1, dim2);
		
	}

	public void area() {
		System.out.println("Area of Rectangle is "+(super.dim1*super.dim2));
		
	}
	
}
class Triangle extends Figure{

	public Triangle(double dim1, double dim2) {
		super(dim1, dim2);
		
	}

	public void area() {
		System.out.println("Area of Rectangle is "+(0.5*super.dim1*super.dim2));
		
	}
	
}
public class TwoFigure {

	public TwoFigure() {
		
	}

	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Figure rFigure=new Rectangle(10,20);
		rFigure.area();
		Figure tFigure=new Triangle(10,20);
		tFigure.area();

	}

}
/*2. Create an abstract class Figure having variables dim1,dim2 of double type and an abstract method area, 
 * then make two subclasses Rectangle and Triangle which will implement the area method. Create the 
 * abstract class reference variable, assign subclass objects to it and print the corresponding area.*/
 