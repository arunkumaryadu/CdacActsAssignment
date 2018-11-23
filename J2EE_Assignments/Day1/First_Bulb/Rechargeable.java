package First_Bulb;

public class Rechargeable implements AA {
	
private int mah;	
	
  public Rechargeable(){
	System.out.println("Rechargeable battry is created!!!");
}
	public void setMah(int mah) {
		this.mah = mah;
	}
	public String getPower() {
		// TODO Auto-generated method stub
		return "rech " + mah;
	}

}
