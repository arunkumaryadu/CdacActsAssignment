package basic;

import javax.servlet.http.HttpServletRequest;

public class RegisterLogic {

	public String registerAccount(HttpServletRequest request) {
		// TODO Auto-generated method stub
		String pn = "/WEB-INF/wronguser.html";
		System.out.println("inside register logic");
		String acno = request.getParameter("acno");
		String pin = request.getParameter("pin");
		String pincode  = request.getParameter("pincode");
		
		if(acno.length() > pincode.length())
		{
			pn ="/WEB-INF/postlogin.html";
			
		}
			
		
		
		
		
		
		
		
		
		return pn;
	}

}
