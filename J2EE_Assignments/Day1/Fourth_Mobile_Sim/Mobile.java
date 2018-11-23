package Fourth_Mobile_Sim;

public class Mobile {

	private Sim s;

	public void setSim(Sim s) {
		System.out.println("Sim Inserted");
		this.s=s;
		
	}

	public void SendSms() {
		System.out.println("Sms Send By "+s.getName());
		
	}

}
