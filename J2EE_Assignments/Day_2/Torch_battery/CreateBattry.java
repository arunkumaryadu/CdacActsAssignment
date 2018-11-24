package Torch_battery;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.ComponentScan;

@ComponentScan("Torch_battery")
public class CreateBattry {
public CreateBattry() {
	// TODO Auto-generated constructor stub
	System.out.println("Battry created here");
}

@Bean
public Alkaline kuchhBhi() {
	Alkaline ak=new Alkaline();
	ak.setMah(1200);
	return ak;
}
}
