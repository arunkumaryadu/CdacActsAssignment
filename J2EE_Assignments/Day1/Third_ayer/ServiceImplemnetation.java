package Third_ayer;

public class ServiceImplemnetation implements Service {

	private DAOLayer d;
	
	
	//wiring to be done by spring
	public void setD(DAOLayer d) {
		this.d = d;
	}



	@Override
	public String doBusinessLogic(String string) {
		// TODO Auto-generated method stub
		System.out.println("in servcie layer");
		System.out.println("got input from presentation layer");
		System.out.println("time to call dao layer by passing information");
		 
		String status =d.trySQLCommand();
		System.out.println("if you want change status to something useful to presnetation");
		return status;
	}

}
