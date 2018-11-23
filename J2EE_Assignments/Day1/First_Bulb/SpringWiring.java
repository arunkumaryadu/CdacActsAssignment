package First_Bulb;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class SpringWiring {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		ClassPathXmlApplicationContext context = 
				new ClassPathXmlApplicationContext(
				"whatever.xml");
		
		
		First_Bulb.Torch x = context.getBean("t1",Torch.class);
		x.on();
		
	/*	Torch t =new Torch();
		AA x =new Alkaline();
		t.setBattery(x);
		t.on();//dont get a slap called Null pointer exception.
		
		
		*/
		
		
		
		Torch app = context.getBean("t2",Torch.class);
		app.on();
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		/*
		*/
		
		
		
		
		
		

	}

}
