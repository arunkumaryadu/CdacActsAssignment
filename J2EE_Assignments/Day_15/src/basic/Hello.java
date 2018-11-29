package basic;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class Hello
 */
@WebServlet("/fca")
public class Hello extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Hello() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doPost(request, response);
		
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		String pn ="/WEB-INF/scrap.html";
		//lot of logic 
		
		
		String why = request.getParameter("why"); // if parameter name is wrong you get logical errors.
		
		
		if(why.equals("login"))
		{
			
			LoginLogic x =new LoginLogic();
			pn = x.getDoLogin(request);
			
			
			
			
		}
		else if(why.equals("register"))
		{
			
			RegisterLogic x =new RegisterLogic();
			pn = x.registerAccount(request);
			
			
			
			
		}
	/*	else if(why.equals("register"))
		{
			
			RegisterLogic x =new RegisterLogic();
			pn = x.registerAccount(request);
			
			
			
			
		}*/
		else if(why.equals("gete"))
		{
			
			GetEmployeeLogic x =new GetEmployeeLogic();
			pn = x.getEmployeeDetails(request);
			
			
			
			
		}

		
		//
		
		
		
		
		
		
		
		
		System.out.println(pn);
		RequestDispatcher rd = request.getRequestDispatcher(pn);
		rd.forward(request, response);
				
		
		
	}

}
