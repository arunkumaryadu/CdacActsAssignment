import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;


class B{	
	private Statement smt;
	Connection con;
	public void MakeConnection() throws ClassNotFoundException, SQLException {
	Class.forName("com.mysql.jdbc.Driver");		
	con=DriverManager.getConnection("jdbc:mysql://localhost:3306/xe?characterEncoding=latin1","root","cdacacts");
	System.out.println("connected to data base for prepared statement");
		this.smt = con.createStatement();
		
	}
	public void select() throws SQLException {
		String q1 = "select * from EMPLOYEES ";		
		PreparedStatement psmt = con.prepareStatement(q1);
		
		System.out.println("Please Enter the EMPLOYEE ID...");
		Scanner sc1 = new Scanner(System.in);
		int eno = sc1.nextInt();		
		  //  psmt.setInt(1, eno);		
		    ResultSet rs =psmt.executeQuery();		
		
		while(rs.next())
		{
			System.out.println(rs.getInt(1) +"  "+ rs.getString(2) +"  "+ rs.getString(3));
		}

	}
	public void update() throws SQLException {		
				
		String q2 = "update EMPLOYEES set  FIRST_NAME = ? where EMPLOYEE_ID = ?";	
		PreparedStatement psmt = con.prepareStatement(q2);
		Scanner sc1 = new Scanner(System.in);
		System.out.println("Please enter EMPLOYEE First name to updated...");
		String ename = sc1.nextLine();
		System.out.println("Please Enter the EMPLOYEE ID...");
		
		int eno = sc1.nextInt();	
		
			psmt.setString(1, ename);
		    psmt.setInt(2, eno);			   		
	       int no=   psmt.executeUpdate();	            
	            System.out.println(no+" Row updatated Now ");
	            
	            String q1 = "select * from EMPLOYEES where EMPLOYEE_ID = ?";		
	    		 psmt = con.prepareStatement(q1);
	    		 psmt.setInt(1, eno);		
	 		    ResultSet rs =psmt.executeQuery();		
	 		
	 		while(rs.next())
	 		{
	 			System.out.println(rs.getInt(1) +"  "+ rs.getString(2) +"  "+ rs.getString(3));
	 		}         
	              
	}
	public void closeDb() throws SQLException {
		con.close();
	}
}
public class B_JDBC_preparedStm {

	
	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		B b=new B();
		b.MakeConnection();
		System.out.println("==================================================");
		b.select();
		System.out.println("==================================================");
		b.update();
		System.out.println("==================================================");
		
		b.closeDb();	

	}

}
/*2.	Write an example(update,insert) for JDBC prepared statement with ResultSet.*/