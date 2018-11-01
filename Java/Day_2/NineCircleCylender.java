class Circle{
	double radius;
	String color;
	double area;
	public Circle() {
		this.radius=1.0;
		this.color="red";
	}
	public Circle(double radius) {
		this.radius=radius;
		this.color="red";
	}
	public Circle(double radius,String color) {
		this.radius=radius;
		this.color=color;
	}
	public double getRadius() {
		return radius;
	}
	public void setRadius(double radius) {
		this.radius = radius;
	}
	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color = color;
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
}
class Cylinder extends Circle {
	public Cylinder() {
		
	}
public Cylinder(double height) {
		this.height=height;
	}
public Cylinder(double height,double radius) {
	this.height=height;
	this.radius=radius;
}
public Cylinder(double height,double radius,String color) {
	this.height=height;
	this.radius=radius;
	this.color=color;
}

	private double height;
	public double getHeight() {
		return height;
	}
	public void setHeight(double height) {
		this.height = height;
	}
	public double getVolume() {
		return 3.1416*super.getRadius()*super.getRadius()*this.getHeight();
	}
	
}
public class NineCircleCylender {
	public static void main(String[] args) {
		Cylinder cylinder=new Cylinder(5,10);
		System.out.println(cylinder.getVolume());
		System.out.println(cylinder.getArea());
		
		
	}

}
