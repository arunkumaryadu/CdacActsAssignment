package basic;

import java.util.List;

import javax.servlet.http.HttpServletRequest;

public class GetEmployeeLogic {

	public String getEmployeeDetails(HttpServletRequest request) {
		// TODO Auto-generated method stub
		String pagename="emp.jsp";
		
		String s =request.getParameter("empno");
		int empno = Integer.parseInt(s);
		if(empno % 2  != 0)
		{
				request.setAttribute("message", empno  + " is found");
				Employee e =assumeYouGotThisFromServiceLayer(empno);   
				request.setAttribute("eo",e);
				
				
			
			
		}
		else
		{
			request.setAttribute("message", empno  + " is not  found");
			
			
		}
		
		
		
		System.out.println("employee details should be got");
		
		return pagename ;
	}

	private Employee assumeYouGotThisFromServiceLayer(int empno) {
		// TODO Auto-generated method stub
		
		Employee e =new Employee(empno,23,44);
		List<String>l = e.getCities();
		l.add("A");
		l.add("Q");
		l.add("Z");
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		return e;
	}

}
