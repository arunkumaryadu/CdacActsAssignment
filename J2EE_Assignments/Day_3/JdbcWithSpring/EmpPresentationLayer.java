package JdbcWithSpring;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class EmpPresentationLayer {
		static EmpDAO doaobj=null;
		
	public void setDoaobj(EmpDAO doaobj) {
			this.doaobj = doaobj;
		}

	public static void main(String[] args) {
		ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("Emp.xml");
		EmpServiceLayer x = context.getBean(EmpServiceLayer.class);
		doaobj.checkJdbcTemp();
		
		Emp e1 =new Emp();		
		e1.setEmpname("WhoCare");
		e1.setEmpno(1);
		e1.setSalary(100);
		
		Emp e2=doaobj.getEmpByempno(e1.getEmpno());
		if( e2 ==null)
			System.out.println("Employee not found , Please Enter Correct Employee Number");
		else
			System.out.println(e2);
		
		
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

