package Assignment;

import java.io.IOException;
import java.util.ArrayList;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.sun.javafx.geom.Area;
import com.sun.xml.internal.bind.v2.schemagen.xmlschema.List;

/**
 * Servlet implementation class Reception
 */
@WebServlet("/Reception")
public class Reception extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Reception() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		String reason=request.getParameter("why");
		System.out.println(reason);
		if(reason.equals("getdeptname")) {
			String deptid=request.getParameter("deptid");
			Employee15 emp=new Employee15();
			Object type=emp.getdeptname(deptid);
			request.setAttribute("type", type);
			RequestDispatcher rd = request.getRequestDispatcher("deptid.jsp");
			rd.forward(request, response);		
			
		}
		else if(reason.equals("getarea")) {
			String pin=request.getParameter("pincode");
			Areas a=new Areas();
			ArrayList<String> l=a.getAreas(pin);
			request.setAttribute("areas", l);
			RequestDispatcher rd = request.getRequestDispatcher("getAreas.jsp");
			rd.forward(request, response);	
			
		}
	}

}
/*
 * 8.	We should have a page called deptid.jsp, request and response both will be deptid .jsp
9.	In deptid.jsp we have two textboxes , one for deptid and other for deptname and submit button.
10.	When user types deptid as odd number, then deptname should appear as accounts, in other cases deptid should appear as sales.
a.	Tip   -- value must be a string ie sales or accounts
11.	Account or sales assume it is coming from service layer
12.	Do the program using the architecture.
13.	Same program it should also print the employee numbers in that deptid.
14.	For example if it is sales, assume empnos are 25,26,27 , in case it is accounts it is 22,23,24 you have to print each of these employees in a new line in the html page		
a.	Value must be an arraylist.
15.	Given an pincode, in a page called getareas.jsp , implement the architecture like this.
a.	Pincode is 3, areas are A,B and C
b.	Pincode is 4, areas are D,E and F

 * */
