
public class ThirdSwap {
public static void main(String[] args) {
	int a=10,b=20;
	System.out.println("Before swap");
	System.out.println("A = "+a);
	System.out.println("B = "+b);
	a=a+b;
	b=a-b;
	a=a-b;
	System.out.println("After swap");
	System.out.println("A = "+a);
	System.out.println("B = "+b);
}
}
