package Assignment;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;


public class Areas {
	
	Map<Integer, ArrayList<String>> m=null;
	public Areas() {
		this.m= new HashMap<Integer, ArrayList<String>>();
		ArrayList<String> ls=new ArrayList<>();
		ArrayList<String> ls1=new ArrayList<>();
		ls.add("A");
		ls.add("B");
		ls.add("C");
		ls1.add("D");
		ls1.add("E");
		ls1.add("F");
		m.put(3, ls);
		m.put(4, ls1);
	}

	public ArrayList<String> getAreas(String pin) {
		System.out.println(this.m);
		
		return this.m.get(Integer.parseInt(pin));
	}

}
//15.	Given an pincode, in a page called getareas.jsp , implement the architecture like this.
//a.	Pincode is 3, areas are A,B and C
//b.	Pincode is 4, areas are D,E and F
