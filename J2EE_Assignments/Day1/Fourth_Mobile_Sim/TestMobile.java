package Fourth_Mobile_Sim;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class TestMobile {

	public static void main(String[] args) {
		
		ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("whatever.xml");  
		//create objects and wiring done
		// and spring has the objects and not we.
		
		
		// hey spring give me the object
		System.out.println("============================ Mobile Sim Scenario Started =================================");
		Mobile c =context.getBean(Mobile.class);
		
		c.SendSms();
		System.out.println("============================ Mobile Sim Scenario Ended =================================");
		

	}

}
