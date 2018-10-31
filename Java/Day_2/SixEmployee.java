class employees{
	 int salary;
	 employees(int salary){
		 this.salary=salary;
	 }
}
class developer extends employees{
	developer(int salary){
		super(salary);
	 }
	public void getSalary() {
		System.out.println("Salary Of Developer is : "+salary);
	}
}
class tester extends employees{
	tester(int salary){
		super(salary);
	 }
	
	public void getSalary() {
		System.out.println("Salary Of tester is : "+salary);
	}
}
class manager extends employees{
	manager(int salary){
		super(salary);
	 }
	public void getSalary() {
		System.out.println("Salary Of manager is : "+salary);
	}
}
public class SixEmployee {
	public static void main(String[] args) {
		developer d = new developer(40000);
		tester t = new tester(50000);
		manager m = new manager(60000);
		d.getSalary();
		t.getSalary();
		m.getSalary();
		
		
	}

}
/*
 * 6) Write a program to calculate salary of employees belonging to different
 *  department like developer, tester and manager extending from Employee.
Ensure all common features are fed in Employee and varying features in 
respective sub classes.
Note: Salary differs based on designation
*/
