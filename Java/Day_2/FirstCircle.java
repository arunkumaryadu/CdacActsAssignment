
public class FirstCircle {
	double radius;
	String color;
	double area;
	public FirstCircle() {
		this.radius=1.0;
		this.color="red";
	}
	public FirstCircle(double radius) {
		this.radius=radius;
		this.color="red";
	}
	public FirstCircle(double radius,String color) {
		this.radius=radius;
		this.color=color;
	}
	public double getRadius() {
		return radius;
	}
	public double getArea() {
		this.area=3.1416*this.radius*this.radius;
		return this.area;
	}
	public void displayCircle() {
		double a1=getArea();
		System.out.println("Radius is :"+this.radius);
		System.out.println("color is  :"+this.color);
		System.out.println("area is  :"+this.area);
		
	}
	public static void main(String[] args) {
		FirstCircle obj1 = new FirstCircle();
		FirstCircle obj2 = new FirstCircle(2.6);
		FirstCircle obj3 = new FirstCircle(2.6,"Blue");
		System.out.println("========================================");
		obj1.displayCircle();
		System.out.println("========================================");		
		obj2.displayCircle();
		System.out.println("========================================");		
		obj3.displayCircle();
		System.out.println("========================================");
		

		
		
	}

}
/*
 * 1.	create class called circle is designed. It contains:  
   create class called circle is designed as shown in the following 
   class diagram. It contains:  
•	Two   instance variables: radius (of type double) and color
 (of type String), with default value of 1.0 and "red", respectively.
•	Three overloaded constructors;
•	this keyword can be used by one constructor to explicitly invoke another
 constructor in the same class
•	Two public methods: getRadius() and getArea().
•	create three circles instances by using given three constructors and display them. 

 */
 