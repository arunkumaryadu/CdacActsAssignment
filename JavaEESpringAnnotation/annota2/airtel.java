package annota2;

public class airtel  implements stdOfSims{
	private int mno;
	private String name="Airtel";
	@Override
	public String getname() {
		// TODO Auto-generated method stub
		return name;
	}
	public airtel(int mno) {
		
		this.mno = mno;
	}
	@Override
	public int getno() {
		// TODO Auto-generated method stub
		return mno;
	}

	@Override
	public void setno(int mno) {
		// TODO Auto-generated method stub
		this.mno=mno;
	}

}



