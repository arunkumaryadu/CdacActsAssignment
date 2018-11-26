import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Types;
import java.util.Scanner;


public class Jdbc3
{

public static void main(String[] args) throws SQLException, ClassNotFoundException
	
	{
		
		Class.forName("oracle.jdbc.driver.OracleDriver");
		
		Connection con=DriverManager.getConnection("jdbc:oracle:thin:@192.9.200.7:1521:actsora","shan","shan");
		
		System.out.println("connected to data base for callabale statement");
		
		
		CallableStatement csmt = con.prepareCall("{call empsal(? , ?)}");
		
		
		System.out.println("enter the empno");
		Scanner sc1 = new Scanner(System.in);
		int eno = sc1.nextInt();
		
		csmt.setInt(1, eno);
		
		
		csmt.registerOutParameter(2, Types.INTEGER);
		
		csmt.execute();
		
		int sal = csmt.getInt(2);
		
		
		System.out.println("salary of the given "+eno+" is "+sal);
		
		con.close();
		csmt.close();		
		
	}
}
