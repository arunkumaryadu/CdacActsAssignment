class Student{
	int id, mark;
	String name,result;
	Student(int id,String name,int mark){
		this.id=id;
		this.name=name;
		this.mark=mark;
	}
	public void findResult() {
		this.result="Fail";
		if(this.mark>40){
			this.result="Pass";
		}
		//System.out.println(this.result);
	}
	public void showData() {
		System.out.println("Student id is      : "+this.id);
		System.out.println("Student Name is    : "+this.name);
		System.out.println("Student mark is    : "+this.mark);
		System.out.println("Student result is  : "+this.result);
	}
}
public class SevenStudentClass {
	public static void main(String[] args) {
		System.out.println("============================================");
		Student s=new Student(1,"Arun",90);
		s.findResult();
		s.showData();
		System.out.println("============================================");
		Student ss1=new Student(2,"Rakesh",33);
		ss1.findResult();
		ss1.showData();
		System.out.println("============================================");
	}

}
/*7) Write a Java program to create Student class with member variable as id, 
 * name, mark and result. Use primary constructors to initialize the value of name,
 *  id and marks. Write a member function to find the result and display the result 
 *  along with the student details.*/
