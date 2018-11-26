
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;


public class Jdbc1 
{

	public static void main(String[] args) throws SQLException, ClassNotFoundException
	
	{
		
		Class.forName("oracle.jdbc.driver.OracleDriver");
		
		Connection con=DriverManager.getConnection("jdbc:oracle:thin:@192.9.200.7:1521:actsora","shan","shan");


//Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","hr","hr");

		
		System.out.println("connected to data base");
		
		
		Statement smt = con.createStatement();
		
//		String q1 = "select * from emp";
//		
//		
//		
//		ResultSet rs = smt.executeQuery(q1);
//		
//		
//		while(rs.next())
//		{
//			System.out.println(rs.getInt(1) + rs.getString(2) + rs.getInt(6));
//		}
		
		
		String q2 = "update emp set sal = sal+100 where empno = 7839";
		
		
		       int no=   smt.executeUpdate(q2);
		            
		            System.out.println("updatated rows "+no);
		            
		            String q1 = "select * from emp where empno = 7839";
		    		
		    		
		    		
		    		ResultSet rs = smt.executeQuery(q1);
		    		
		    		
		    		while(rs.next())
		    		{
		    			System.out.println(rs.getInt(1) + rs.getString(2) + rs.getInt(6));
		    		}  
		            
		            
		            
		
		//rs.close();
		con.close();
		
		
	}
}
