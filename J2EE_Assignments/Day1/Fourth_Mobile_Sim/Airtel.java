package Fourth_Mobile_Sim;

public class Airtel implements  Sim {

	private int number;
	private String name;

	@Override
	public int getNumber() {
		
		return this.number;
	}

	@Override
	public void setNumber(int number) {
		
		this.number=number;
		
	}

	@Override
	public String getName() {
		// TODO Auto-generated method stub
		return this.name;
	}

	@Override
	public void setName(String str) {
		name=str;
		
	}

}

//Airtel 