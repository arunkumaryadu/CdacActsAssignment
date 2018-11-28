package JdbcWithSpring;

public class Emp {
	 int empno;
	 String empname;
	 int salary;
	public void setEmpno(int empno) {
		this.empno = empno;
	}
	public void setEmpname(String empname) {
		this.empname = empname;
	}
	public void setSalary(int salary) {
		this.salary = salary;
	}
	
	
	public int getEmpno() {
		return empno;
	}
	public String getEmpname() {
		return empname;
	}
	public int getSalary() {
		return salary;
	}
	public String toString() {
		return "Emp [empno=" + empno + ", empname=" + empname + ", salary=" + salary + "]";
	}
	 
}
/*
create table emp14(
	empno int(11),
	empname varchar(25),
	salary int(11)
);
insert into emp14 values(1,'arun',10000);
insert into emp14 values(2,'Manish',9000);
insert into emp14 values(3,'Tanay',6000);
insert into emp14 values(4,'Ujjwal',4000);
insert into emp14 values(5,'anand',2000);
*/