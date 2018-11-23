package Third_ayer;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class TestSpring {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//hey spring get your objects ready.
		
		ClassPathXmlApplicationContext context = 
				new ClassPathXmlApplicationContext(
				"whatever.xml");
		Presentation s =context.getBean(Presentation.class);
		s.startUp();
		
		
		
		
		
		
		

	}

}
