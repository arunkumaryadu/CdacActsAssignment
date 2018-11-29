package basic;

public class Circle {
	
	private String cname;
	private int r;
	
	
	public Circle(String cname, int r) {
			this.cname = cname;
		this.r = r;
	}


	@Override
	public String toString() {
		return "Circle [cname=" + cname + ", r=" + r + "]";
	}
	
	public int perimeter()
	{
		return (int) (2 * Math.PI *r);
		
	}


	public String getCname() {
		return cname;
	}


	public void setCname(String cname) {
		this.cname = cname;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

}
