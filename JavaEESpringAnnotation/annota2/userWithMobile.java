package annota2;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;
@Component
public class userWithMobile {
@Autowired
private stdOfSims a1;
	public void getsimName() {
		// TODO Auto-generated method stub
		//System.out.println(j1.getString());
		System.out.println("sim name is :"+a1.getname()+" and sim number is : "+a1.getno());
	}
		
		
	

}
