class DAC implements Cdac{	
	static String courseName;
	static int noOfStudents;
	DAC(String courseName,int noOfStudents){
		this.courseName=courseName;
		this.noOfStudents=noOfStudents;
	}
	public double placementPercentage() {
		return 99;
			}
	public void Display() {
		System.out.println("Cource Name : "+courseName+" Number of Student :"+noOfStudents+" Placement Percentage : "+this.placementPercentage());		
	}
} 
class WIMC implements Cdac{
	
	static String courseName;
	static int noOfStudents;
	WIMC(String courseName,int noOfStudents){
		this.courseName=courseName;
		this.noOfStudents=noOfStudents;
	}
	public double placementPercentage() {		
		return 60;
	}
	public  void Display() {
		System.out.println("Cource Name : "+courseName+" Number of Student :"+noOfStudents+" Placement Percentage : "+this.placementPercentage());		
	}
} 
class DASS implements Cdac{
	static String courseName;
	static int noOfStudents;
	DASS(String courseName,int noOfStudents){
		this.courseName=courseName;
		this.noOfStudents=noOfStudents;
	}
	public double placementPercentage() {		
		return 50;
	}
	public  void Display() {
		System.out.println("Cource Name : "+courseName+" Number of Student :"+noOfStudents+" Placement Percentage : "+this.placementPercentage());		
	}
} 
public class ThirdCource {

	
	public static void main(String[] args) {
		Cdac c1=new DAC("DAC",114);
		((DAC) c1).Display();
		Cdac c2=new WIMC("WIMC",100);
		((WIMC) c2).Display();
		Cdac c3=new DASS("DASS",114);
		((DASS) c3).Display();
	}

}
/*3) Create a program to implement the following using interface 
There are three courses  like DAC,WIMC,DASS All the courses implements 
interface module which has a method placementPercentage(). All the course 
should have member variable of course name,no of students.use parameterized 
constructor to set value of couse name and no of students. Have a coordinator 
class to find out the placementPercentage of each courses and display couser 
name,no of students placementPercentage.
*/
