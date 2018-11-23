package Second_cabinate;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class TestCabinet {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		ClassPathXmlApplicationContext context = 
				new ClassPathXmlApplicationContext(
				"whatever.xml");  //create objects and wiring done
		// and spring has the objects and not we.
		
		
		// hey spring give me the object
		Cabinet c =context.getBean(Cabinet.class);
		
		c.switchOnComptuter();
		
		
		
		
		
		
		/*Cabinet c =callSpringFunction();
		c.switchOnComptuter();
*/
	}

}
