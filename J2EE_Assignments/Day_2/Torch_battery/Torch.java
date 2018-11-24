package Torch_battery;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

@Component
public class Torch {
	@Autowired
	Alkaline ak;
	public Torch() {
		System.out.println("Torch is created!!!");
	}
	public void setAk(Alkaline ak) {
		this.ak = ak;
	}
	public void showBattryPower() {
		System.out.println("Battery Power is"+ak.getMah());
	}

}
