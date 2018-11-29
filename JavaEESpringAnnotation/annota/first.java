package annota;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.ComponentScan;
@ComponentScan("annota")
public class first {
	@Bean
	public Friend2 hi() {
		System.out.println(1);
		System.out.println("printing hiiiii");
		Friend2 f1=new Friend2(16);
		return f1;
		
	}

	public first() {
		System.out.println(2);
	}

}
