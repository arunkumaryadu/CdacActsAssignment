import java.util.Iterator;
import java.util.Stack;


public class ThirdStack {

	public static void main(String[] args) {
		Stack<String> s = new Stack<>();
		
		// add on stack 
		s.add("Arun");
		s.add("Shankar");
		s.add("Priya");
		s.add("Manish");
		s.add("chonga");
		s.add("chongi");
		s.add("Butari");	
		
		System.out.println("Element on stack are");
		Iterator<String> it=s.iterator();
		
		while (it.hasNext()) {
			String string = (String) it.next();
			System.out.println(string);
		}
				
		// Pop
		System.out.println("Poped Element is "+s.pop());
		System.out.println("Poped Element is "+s.pop());
		
		
		// Display
		System.out.println("Element on stack after Pop operation perform");
		 it=s.iterator();
		
				while (it.hasNext()) {
					String string = (String) it.next();
					System.out.println(string);
				}
	}

}
/*3.	Write a java program to do push, pop , display objects on stacks.*/
