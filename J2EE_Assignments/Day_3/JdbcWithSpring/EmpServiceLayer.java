package JdbcWithSpring;


import java.util.List;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class EmpServiceLayer {
	 EmpDAO doaobj=null;
	
public void setDoaobj(EmpDAO doaobj) {
		this.doaobj = doaobj;
	}
private void checkJdbcTemp() {
	// TODO Auto-generated method stub
	doaobj.checkJdbcTemp();
}
private Emp getEmpByempno(int empno) {
	// TODO Auto-generated method stub
	Emp e2=doaobj.getEmpByempno(empno);
	
	return e2;
}
private  List<Emp> getAllEmpBySalary(int salary) {
	List<Emp> lt2=doaobj.getAllEmpBySalary(salary);
	return lt2;
}
private List<Emp> getAllEmp() {
	 List<Emp> lt2=doaobj.getAllEmp();
	return lt2;
}

public static void main(String[] args) {
	ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("Emp.xml");
	EmpServiceLayer x = context.getBean(EmpServiceLayer.class);
	x.checkJdbcTemp();
	
	Emp e1 =new Emp();		
	e1.setEmpname("WhoCare");
	e1.setEmpno(1);
	e1.setSalary(5000);
	
	System.out.println("==============================================================");
	System.out.println("Select  Employee based on empno"+e1.getEmpno());
	Emp e2=x.getEmpByempno(e1.getEmpno());
	if( e2 ==null)
		System.out.println("Employee not found , Please Enter Correct Employee Number");
	else{
		System.out.println("Employee Found");
		System.out.println(e2);
	}		
	System.out.println("==============================================================");
	System.out.println("Select  Employees who got salary less than"+e1.getSalary());
	List<Emp> lt1=x.getAllEmpBySalary(e1.getSalary());
	System.out.println(lt1);
	System.out.println("==============================================================");
	System.out.println("Select All Employees");
	 List<Emp> lt2=x.getAllEmp();
	 System.out.println(lt2);
	 System.out.println("==============================================================");
	/*System.out.println(x.updatepin(c));  //true
	c.setAccountno(4);
	System.out.println(x.updatepin(c)); //false

			
			Account c1 = x.get(8);
			if( c1 ==null)
				System.out.println("accno not found");
			else
				System.out.println("accno found");*/
}




}
/*
2. jdbc with spring
in core java is done.

create a class called Emp
core java +spring + jdbc.
with empno,empname and salary
1. show Emp details based on empno
2. show all Emp details
3. show emp based on salary criteria
0. exit

getemp, take empno and show empno,empname and salary
print some message if empno is not found.

for option 2 show all emp details

option 3. take one salary and show all emp who get equal or greater than
that salary.
*/