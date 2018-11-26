import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;


public class Jdbc2 
{
public static void main(String[] args) throws SQLException, ClassNotFoundException
	
	{
		
		Class.forName("oracle.jdbc.driver.OracleDriver");
		
		Connection con=DriverManager.getConnection("jdbc:oracle:thin:@192.9.200.7:1521:actsora","shan","shan");
		
		System.out.println("connected to data base for prepared statement");
		
		String q3 = "select * from emp where empno = ?";
		
		//update emp set sal = sal + ? where empno = ?
		
		PreparedStatement psmt = con.prepareStatement(q3);
		
		//read empno 
		System.out.println("enter the empno");
		Scanner sc1 = new Scanner(System.in);
		int eno = sc1.nextInt();
		
		    psmt.setInt(1, eno);
		
		    ResultSet rs =psmt.executeQuery();
		    
		    
		    while(rs.next())
    		{
    			System.out.println(rs.getInt(1) + rs.getString(2) + rs.getInt(6));
    		}  
            
		
}
}
