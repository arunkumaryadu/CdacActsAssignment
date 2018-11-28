package JdbcWithSpring;

import java.util.List;

import jdbctemplate.basics.Account;
import jdbctemplate.basics.XYZ;

import org.springframework.dao.DataAccessException;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.jdbc.core.RowMapper;

public class EmpDAO {
	private JdbcTemplate jtemp;

	public void setJtemp(JdbcTemplate jtemp) {
		this.jtemp = jtemp;
	}
	
	public void checkJdbcTemp()
	{
		System.out.println( jtemp != null  ? "jdbc template got" :"jdbc template not got");	 
		
	}
	
		// Single Select
	public Emp getEmpByempno(int empno)
	{
		
		String sqlcmd ="select empno,empname,salary from emp14 where empno = ?";
		Object x[]= {1};
		RowMapper<Emp> y =new ForRM();
		Emp c =null;
		try {
			c =jtemp.queryForObject(sqlcmd,x, y);
		} catch (DataAccessException e) {
			// TODO Auto-generated catch block
			//log the exception into some file.
		}
		return c;		
	}
	
	
	// Multi Select
	
	public List<Emp> getAllEmpBySalary(int salary)
	{
		String sql = "select empno,empname,salary from emp14 where salary >= ?";
		Object x[]= { salary };  //parameters
		
		RowMapper<Emp> z = new ForRM();
		//RowMapper spring will tell hey look each row you tell which object
		//shyoudl be created,  I will create those objects.
		
		
		List<Emp> rows  = jtemp.query(sql,x,z);
		
		System.out.println(rows);
		return rows;
		
	}
	
	// Multi Select
	
		public List<Emp> getAllEmp()
		{
			String sql = "select empno,empname,salary from emp14";
			//Object x[]= { salary };  //parameters
			
			RowMapper<Emp> z = new ForRM();
			//RowMapper spring will tell hey look each row you tell which object
			//shyoudl be created,  I will create those objects.
			
			
			List<Emp> rows  = jtemp.query(sql,z);
			
			System.out.println(rows);
			return rows;
			
		}
}
