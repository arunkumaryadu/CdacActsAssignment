package basic;

import java.util.ArrayList;
import java.util.List;

public class Employee {
	
	private int empno,mobileno, deptid;
	private List<String> cities =new ArrayList<>();
	
	
	

	public List<String> getCities() {
		return cities;
	}

	public void setCities(List<String> cities) {
		this.cities = cities;
	}

	public int getEmpno() {
		return empno;
	}

	public void setEmpno(int empno) {
		this.empno = empno;
	}

	public int getMobileno() {
		return mobileno;
	}

	public void setMobileno(int mobileno) {
		this.mobileno = mobileno;
	}

	public int getDeptid() {
		return deptid;
	}

	public void setDeptid(int deptid) {
		this.deptid = deptid;
	}

	public Employee(int empno, int mobileno, int deptid) {
		super();
		this.empno = empno;
		this.mobileno = mobileno;
		this.deptid = deptid;
	}
	
	

}
