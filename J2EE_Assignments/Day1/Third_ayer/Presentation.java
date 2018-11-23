package Third_ayer;

public class Presentation {

	private Service s;
	
	
//wiriing to be done by Spring
	public void setS(Service s) {
		this.s = s;
	}



	public void startUp() {
		// TODO Auto-generated method stub
		
		System.out.println("this is presentaion layer");
		System.out.println("getting input from user");
		
		String whatDidServiceTellUs = s.doBusinessLogic("takesomeinput from presentation");
		
		System.out.println("depending on what business logic told, we need to update ui");
		
		
		
		
		
		
	}

}
