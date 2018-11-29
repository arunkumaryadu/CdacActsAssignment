package annota;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;

public class three {
	public static void main(String[] args) {
		AnnotationConfigApplicationContext c=new AnnotationConfigApplicationContext(first.class);
		System.out.println(10);
		second s =c.getBean(second.class);
		System.out.println(11);
		s.printname();
		System.out.println(12);
	}

	public three() {
		System.out.println(4);
		// TODO Auto-generated constructor stub
	}

}
