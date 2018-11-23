package Second_cabinate;

public class AMD implements Processor {

	private int clockSpeed;
	private String make;

	@Override
	public int clockSpeed() {
		// TODO Auto-generated method stub
		return clockSpeed;
	}

	@Override
	public String make() {
		// TODO Auto-generated method stub
		return make;
	}

	@Override
	public void setScrap(int x) {
		// TODO Auto-generated method stub
		clockSpeed =x;
		
		
	}

	@Override
	public void setJunk(String z) {
		// TODO Auto-generated method stub
		make = z;
		
	}

}
