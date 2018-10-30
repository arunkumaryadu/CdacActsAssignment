/*5.	Create a class Emp with data members emp no, emp name, emp designation, dept and 
 * salary,date of joining and methods as getData() (to set the values to data members)
 *  and displayData() (to display data members values to the screen) create an employee 
 *  instance and display its information.

*/
class Emp {
	private int empNo,salary;
	private String empName, empDesignation,dept,dateOfJoining;
	public void setData(int empNo,int salary,String empName,String empDesignation,String dept,String dateOfJoining ){
    	this.empNo=empNo;
    	this.salary=salary;
    	this.empName=empName;
    	this.empDesignation=empDesignation;
    	this.dept=dept;
    	this.dateOfJoining=dateOfJoining;
    }
	public void displayData(){
		System.out.println("empNo is           : "+this.empNo);
		System.out.println("empName is         : "+this.empName);
		System.out.println("empDesignation is  : "+this.empDesignation);
		System.out.println("dept is            : "+this.dept);
		System.out.println("dateOfJoining is   : "+this.dateOfJoining);
		System.out.println("salary is          : "+this.salary);
	}
}

public class FifthClass {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 int empNo=1,salary=50000;
		 String empName="Arun", empDesignation="employee",dept="AI",dateOfJoining="1-03-2019";
		Emp objEmp=new Emp();
		objEmp.setData(empNo, salary, empName, empDesignation, dept, dateOfJoining);
		objEmp.displayData();
	}
}
