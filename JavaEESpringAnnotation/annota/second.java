package annota;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

@Component
public class second {
	@Autowired
	private Friend2 a1;

	public second() {
		// TODO Auto-generated constructor stub
		System.out.println(7);
	}

	public void printname() {
		// TODO Auto-generated method stub
		System.out.println(8);
		System.out.println(a1.getString());
		System.out.println(9);
		
	}

}
