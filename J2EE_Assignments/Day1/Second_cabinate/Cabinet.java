package Second_cabinate;

public class Cabinet {
	
	private Processor x;

	public void setX(Processor x) {
		System.out.println("wiring happened");
		this.x = x;
	}

	public void switchOnComptuter() {
		// TODO Auto-generated method stub
		System.out.println(x.clockSpeed() + " "  + x.make());
		
		
	}
	
	
	
	
	
	
	
	

}
