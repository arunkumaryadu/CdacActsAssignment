package annota1;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.ComponentScan;
@ComponentScan("annota1")
public class vender {
	@Bean
//	public jio sim() {
//		System.out.println("jio sim creating");
//		 jio j1= new jio("jioSim");	
//		 return j1;
//	}
	
	public airtel sim() {
		System.out.println("airtel sim creating");
		airtel a1= new airtel("airtel");
		return a1;
	}


}
