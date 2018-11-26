import java.security.acl.LastOwnerException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

class A{	
	private Statement smt;
	Connection con;
	public void MakeConnection() throws ClassNotFoundException, SQLException {
    Class.forName("com.mysql.jdbc.Driver");		
    con=DriverManager.getConnection("jdbc:mysql://localhost:3306/xe?characterEncoding=latin1","root","cdacacts");
	System.out.println("connected to data base for simple statement");
		this.smt = con.createStatement();
		
	}
	public void select() throws SQLException  {
		String q1 = "select * from EMPLOYEES where EMPLOYEE_ID < 120";		
		
		ResultSet rs = smt.executeQuery(q1);
		
		
		while(rs.next())
		{
			System.out.println(rs.getInt(1) +"  "+ rs.getString(2) +"  "+ rs.getString(4));
		}

	}
	public void update() throws SQLException {
		
		System.out.println("Before Update ");
		String q1 = "select * from EMPLOYEES where EMPLOYEE_ID =104";		
		ResultSet rs = smt.executeQuery(q1);
				
		while(rs.next())
		{
			System.out.println(rs.getInt(1) +" "+ rs.getString(2) +" "+ rs.getString(4));
		}  
		
		
		String q2 = "update EMPLOYEES set  FIRST_NAME = 'aa' where EMPLOYEE_ID = 104";		
	       int no=   smt.executeUpdate(q2);
	            
	            System.out.println("updatated rows "+no);
	            System.out.println("After Update ");	            
	             q1 = "select * from EMPLOYEES where EMPLOYEE_ID =104";	    		
	    		
	    		 rs = smt.executeQuery(q1);	    		
	    		
	    		while(rs.next())
	    		{
	    			System.out.println(rs.getInt(1) +" "+ rs.getString(2) +" "+ rs.getString(4));
	    		}  
	}
	public void closeDb() throws SQLException {
		con.close();
	}
}

public class A_JDBC_simpleStm {
	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		A a=new A();
		a.MakeConnection();
		System.out.println("==================================================");
		a.select();
		System.out.println("==================================================");
		a.update();
		System.out.println("==================================================");
		a.closeDb();		
	}
}

/*1.	Write an example(select,update) for JDBC Simple statement with ResultSet.*/