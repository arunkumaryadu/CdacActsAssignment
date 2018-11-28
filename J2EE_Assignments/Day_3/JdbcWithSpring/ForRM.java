package JdbcWithSpring;

import java.sql.ResultSet;
import java.sql.SQLException;

import org.springframework.jdbc.core.RowMapper;

public class ForRM implements RowMapper<Emp> {

	public Emp mapRow(ResultSet arg0, int arg1) throws SQLException {
		Emp c=null;

		c=new Emp();
		c.setEmpno(arg0.getInt(1));
		c.setEmpname(arg0.getString(2));
		c.setSalary(arg0.getInt(3));
	    return c;
		
	}

}
