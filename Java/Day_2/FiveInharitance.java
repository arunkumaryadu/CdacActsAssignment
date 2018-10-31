class Person{
	Person(){
		System.out.println("Person c-Tor");
	}
	String name="xyz";
	int age=32;	
}
class Employee extends Person{
	Employee(){
		System.out.println("Employee c-Tor");
	}
	public void myProfession() {
		System.out.println("i am Employee");
		System.out.println(name+"  "+age);
	}
}
class Teacher extends Person{
	Teacher(){
		System.out.println("Teacher c-Tor");
	}
	
	public void myProfession() {
		System.out.println("i am Teacher");
		System.out.println(name+"  "+age);
	}
}
class PermanantEmployee extends Employee{
	PermanantEmployee(){
		System.out.println("PermanantEmployee c-Tor");
	}
	public void myProfession() {
		System.out.println("i am Permanant Employee");
		System.out.println(name+"  "+age);
	}
}
class ContractEmployee extends Employee{
	ContractEmployee(){
		System.out.println("ContractEmployee c-Tor");
	}
	public void myProfession() {
		System.out.println("i am Contract Employee");
		System.out.println(name+"  "+age);
	}
}
public class FiveInharitance {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("========================================");
		ContractEmployee ce = new ContractEmployee();
		ce.myProfession();
		System.out.println("========================================");
		PermanantEmployee pe = new PermanantEmployee();
		pe.myProfession();
		System.out.println("========================================");
		Employee e = new Employee();
		e.myProfession();
		System.out.println("========================================");
		Teacher t = new Teacher();
		t.myProfession();
		System.out.println("========================================");
	}
	

}
/*
 * 5. write java program to implement Inheritance with following example:
Person will have name and age as data members. Teacher and employee will 
inherit data members in the super class and create its own method myProfession() 
to display their profession. Then create objects of Teacher, Permanent, and 
Contract employee to display their profession.. 

 * */
