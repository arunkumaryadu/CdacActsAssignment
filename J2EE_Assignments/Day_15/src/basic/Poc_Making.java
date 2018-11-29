package basic;

import java.util.HashMap;
import java.util.Map;

public class Poc_Making {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Map<String, Object> m =new HashMap();
		fillupmap(m);
		String z ="X";
		Object value = m.get(z);
		if( value != null)
		{
			if(value instanceof Circle)
			{
				Circle temp = (Circle) value;
				System.out.println(temp.perimeter());				
					
				
			}
			else if(value instanceof Rectangle)
			{
				Rectangle temp = (Rectangle) value;
				System.out.println(temp.area());				
					
				
			}
			
			
			
		}
		else
			System.out.println("key not found");
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

	}

	private static void fillupmap(Map<String, Object> m) {
		// TODO Auto-generated method stub
		Rectangle r =new Rectangle("A",2,3);
		m.put(r.getRname(), r);
		r =new Rectangle("B",4,1);
		m.put(r.getRname(), r);
		Circle c =new Circle("C",3);
		m.put(c.getCname(),c);
		c =new Circle("D",4);
		m.put(c.getCname(),c);
		
	}

}
