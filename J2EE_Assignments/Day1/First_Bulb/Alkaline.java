package First_Bulb;

public class Alkaline implements AA {
	
	private int mah;
	
	
	

	public void setMah(int mah) {
		System.out.println(6);
		this.mah = mah;
	}




	public Alkaline() {
		super();
		// TODO Auto-generated constructor stub
		System.out.println("Alkaline battry is created!!!");
	}




	public String getPower() {
		
		
		// TODO Auto-generated method stub
		return "alk " + mah;
	}

}
