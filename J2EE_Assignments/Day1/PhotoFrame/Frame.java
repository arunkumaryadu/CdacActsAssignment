package PhotoFrame;

public class Frame {

	private PicType s;

	public void setPicType(PicType s) {
		System.out.println("Sim Inserted");
		this.s=s;
		
	}

	public void showPicType() {
		System.out.println("Genere Of Picture which is in frame is  "+s.getName());
		
	}

}
