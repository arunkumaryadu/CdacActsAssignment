package basic;

import javax.servlet.http.HttpServletRequest;

public class LoginLogic {
	
	//this function should return finaly what page to show.

	public String getDoLogin(HttpServletRequest request) {
		// TODO Auto-generated method stub
		//String pn = "/WEB-INF/wronguser.html";
		String pn = "/login.jsp";
		
		String acno = request.getParameter("acno");
		String pin = request.getParameter("pin");
		
		if(acno.length() > 3 && Integer.parseInt(pin.trim()) == 1234)
		{
			pn ="/WEB-INF/postlogin.html";
			
		}
		else
		{
			//writing on request notice board
			request.setAttribute("k1","invalid username or password");
			
		}
		
		
		
		
		
		
		
		
		
		
		
		return pn;
	}

}
