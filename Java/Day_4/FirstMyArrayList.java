import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;


public class FirstMyArrayList {

	public static void main(String[] args) {
	ArrayList<Integer> al=new ArrayList<>();
	
		
		// adding elements
		System.out.println("adding elements ");
		for(int i=0;i<10;i++){
			al.add(i+100);
		}
		
		System.out.println(al);
		
		// remove element by index   
      System.out.println("emove element by index index 3");
		al.remove(3);
		System.out.println(al);
		
		// remove element by value 
		System.out.println("remove element by value  108");
		   
				al.remove(al.indexOf(108));
				System.out.println(al);
				
				
		System.out.println("Modify value 109 by 1009");
		int in=al.indexOf(109);
		al.remove(in);
		al.add(in,1009);
		System.out.println(al);
	
		
		// get particular element
				System.out.println(" get particular element by index 3");
		System.out.println(al.get(3));
		
		System.out.println("Print using Iterator");
		Iterator it = al.iterator();
		while(it.hasNext())
	    {
	    	System.out.println(it.next());
	    }
		
		System.out.println("print using for loop");
		for(int i=0;i<al.size();i++){
			System.out.println(al.get(i));
		}
		System.out.println("print after sorting");
		Collections.sort(al);
		System.out.println(al);
		
		
		
		// To clear all elements
		al.clear();
		System.out.println(al);
		
		
	}

}
/*
 * 1.	Write a java program to do following operations on Array List.
1.	Add element
2.	Remove a particular element
3.	Modify
4.	View All elements(Use Iterator)
5.	View a Particular element (get() )
6.	Sort (Collections.sort)

 * */
 