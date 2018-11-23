package Second_cabinate;

public class Intel implements Processor {

	private int cs;
	private String mk;
	
	
	

	public Intel() {
		// TODO Auto-generated constructor stub
		System.out.println("1");
	}

	@Override
	public int clockSpeed() {
		// TODO Auto-generated method stub
		return cs;
	}

	@Override
	public String make() {
		// TODO Auto-generated method stub
		return mk;
	}

	@Override
	public void setScrap(int x) {
		// TODO Auto-generated method stub
		System.out.println("2");
		cs =x;
		
	}

	@Override
	public void setJunk(String z) {
		
		System.out.println("3");
		// TODO Auto-generated method stub
		mk =z;
		
		
	}

}
