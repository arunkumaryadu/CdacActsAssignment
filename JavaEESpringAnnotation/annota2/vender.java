package annota2;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.ComponentScan;
@ComponentScan("annota2")
public class vender {
	@Bean
	public stdOfSims sim() {
		stdOfSims a1= new jio(2356);
		return a1;
	}


}
