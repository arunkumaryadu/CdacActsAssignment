package Torch_battery;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;


public class TestTorch {
public static void main(String[] args) {
	AnnotationConfigApplicationContext c = 	new AnnotationConfigApplicationContext(CreateBattry.class);
	Torch x = c.getBean(Torch.class);
	x.showBattryPower();
}
}
