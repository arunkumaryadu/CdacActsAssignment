
class SCounter{
	static int count;
	public SCounter(){
		System.out.println(++count);		
	}
	static {
		System.out.println("Static block for SCounter");
		count=1;
	}
}
class NSCounter{
	 int count;
	 public NSCounter(){
			System.out.println(++this.count);		
		}
}
public class FourCounterDemo {
	static {
		System.out.println("Static block for FourCounterDemo");
	}
	public static void main(String[] args) {
		
		// TODO Auto-generated method stub
		System.out.println("========================================");
System.out.println("SCounter count Value is");
SCounter obj0 =new SCounter();
SCounter obj1 =new SCounter();
SCounter obj2 =new SCounter();
System.out.println("========================================");
System.out.println("NSCounter count Value is");
NSCounter obj4 =new NSCounter();
NSCounter obj5 =new NSCounter();
NSCounter obj6 =new NSCounter();
System.out.println("========================================");

	}

}
/*
 * 
 * 4) Create two java classes SCounter (with static integer count variable ) 
 * and NSCounter (with integer count variable).  Implement constructors which 
 * increments count variable by 1 and prints the same (in both classes). Use this
 *  keyword to refer to count in constructor. ? Write a CounterDemo class which
 *   contains the main() and tests the same by creating 3  objects each for SCounter
 *    and NSCounter classes.
 Write a static block which prints  
Static block invoked in CounterDemo in CounterDemo Class.
Static block invoked in SCounter in SCounter Class.
Compile and run the program to check the same.

 */