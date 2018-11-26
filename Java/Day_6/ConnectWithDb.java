import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;


public class ConnectWithDb {
	private Statement smt;
	public Statement MakeConnection() throws ClassNotFoundException, SQLException {
    Class.forName("oracle.jdbc.driver.OracleDriver");		
	//Connection con=DriverManager.getConnection("jdbc:oracle:thin:@192.9.200.7:1521:actsora","shan","shan");
    Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","hr","hr");
	System.out.println("connected to data base");
		smt = con.createStatement();
		return smt;
	}

}
