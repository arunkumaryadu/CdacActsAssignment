package annota1;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;

public class main1 {
public static void main(String[] args) {
	AnnotationConfigApplicationContext a=new AnnotationConfigApplicationContext(vender.class);
	
	userWithMobile us = a.getBean(userWithMobile.class);
	
	us.getsimName();
}
}
