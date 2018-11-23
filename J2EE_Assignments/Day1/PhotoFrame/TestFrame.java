package PhotoFrame;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class TestFrame {

	public static void main(String[] args) {
		
		ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("whatever.xml");  
		//create objects and wiring done
		// and spring has the objects and not we.
		
		
		// hey spring give me the object
		System.out.println("============================ Photo Frame Scenario Started =================================");
		Frame c =context.getBean(Frame.class);
		
		c.showPicType();
		System.out.println("============================Photo Frame Scenario Ended =================================");
		

	}

}
