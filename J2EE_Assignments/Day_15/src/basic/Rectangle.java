package basic;

public class Rectangle {
	
	private String rname;
	private int length,breadth;
	
	public Rectangle(String rname, int length, int breadth) {
	
		this.rname = rname;
		this.length = length;
		this.breadth = breadth;
	}

	@Override
	public String toString() {
		return "Rectangle [rname=" + rname + ", length=" + length + ", breadth=" + breadth + "]";
	}
	
	public int area()
	{
		return length*breadth;
		
	}

	public String getRname() {
		return rname;
	}

	public void setRname(String rname) {
		this.rname = rname;
	}
	
	
	
	
	
	

}
