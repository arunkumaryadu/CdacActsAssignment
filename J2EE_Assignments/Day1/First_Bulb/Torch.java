package First_Bulb;

public class Torch {
	// old things never die they take revenge.
	private Bulb b;
	private AA battery;
	
	
	public Torch() {
		
		System.out.println("Torch is created !!");
		b =new Bulb();
	}
	
	
	


	public AA getBattery() {
		return battery;
	}





	public void setBattery(AA battery) {
		System.out.println("AA type " + battery.getClass().getName());
		System.out.println("2");
		this.battery = battery;
	}







	public void on() {
		// TODO Auto-generated method stub
		System.out.println(b.wattage()  + " glowing pwr from " + battery.getPower());
		
	}
	
	
	
	

}
