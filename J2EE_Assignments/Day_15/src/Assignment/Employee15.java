package Assignment;

public class Employee15 {

	public Object getdeptname(String deptid) {
		Object o;
		if(Integer.parseInt(deptid)%2==0) {
			 o=new Sales();
		}
		else {
			 o=new Account();
		}
		return o;
			
		
	}

}
/*10.	When user types deptid as odd number, then deptname should appear as accounts, in other cases deptid should appear as sales.
*/