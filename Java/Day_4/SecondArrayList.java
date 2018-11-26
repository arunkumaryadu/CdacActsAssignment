import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.function.Function;
import java.util.function.ToDoubleFunction;
import java.util.function.ToIntFunction;
import java.util.function.ToLongFunction;

class Teacher{
	int id;
	String name;
	String sub;
	public Teacher(int id,String name,String sub) {
		this.id=id;
		this.name=name;
		this.sub=sub;
	}
	@Override
	public String toString() {
		return " ID : "+this.id+" , Name : "+this.name+" , Subject : "+this.sub;
	}
}
class Student{
	int Rollno;
	String name;
	String course;
	public Student(int Rollno,String name,String course) {
		this.Rollno=Rollno;
		this.name=name;
		this.course=course;
	}
	@Override
	public String toString() {
		return " Roll Number : "+Rollno+" , Name : "+name+" course : "+course;
	}
	}

class SortByRollNo implements Comparator<Student>{

	@Override
	public int compare(Student s1, Student s2) {
			return (s1.Rollno-s2.Rollno);
	}
}
class SortByName implements Comparator<Student>{

	@Override
	public int compare(Student e, Student e1) {
		
		 return e.name.compareTo((e1.name));
	}

	
	
}

public class SecondArrayList {

	public static void main(String[] args) {
		ArrayList<Teacher> alt=new ArrayList<>();
		ArrayList<Student> als=new ArrayList<>();
		Teacher t1 = new Teacher(1, "A", "a");
		Teacher t2 = new Teacher(2, "B", "b");
		Teacher t3 = new Teacher(3, "C", "c");
		Teacher t4 = new Teacher(4, "D", "d");
		Teacher t5 = new Teacher(5, "E", "e");
		
		Student s1=new Student(1019, "Arun", "DAC");
		Student s2=new Student(1005, "Anditya", "DAC");
		Student s3=new Student(1012, "Anand", "DAC");
		Student s4=new Student(1053, "Manish", "DAC");
		Student s5=new Student(1105, "Ujjawal", "DAC");
		Student s6=new Student(1106, "Tanay", "DAC");
		
		alt.add(t1);
		alt.add(t2);
		alt.add(t3);
		alt.add(t4);
		alt.add(t5);
		
		als.add(s1);
		als.add(s2);
		als.add(s3);
		als.add(s4);
		als.add(s5);
		als.add(s6);
		

		Iterator it = alt.iterator();
		System.out.println("Print Teacher objects using Iterator");
	    while(it.hasNext())
	    {	    	
	    	Teacher obj =(Teacher)it.next();
	    	System.out.println(obj);
	    }
		
	    Iterator it1 = als.iterator();
		System.out.println("\nPrint Student objects using Iterator");
	    while(it1.hasNext())
	    {	    	
	    	Student obj =(Student)it1.next();
	    	System.out.println(obj);
	    }
	    SortByRollNo sbR =new SortByRollNo();
	    Collections.sort(als,sbR);
	    System.out.println("\nPrint Student objects using Iterator After Sorting Based on roll number");
	  
	    it1 = als.iterator();
	    while(it1.hasNext())
	    {	    	
	    	Student obj =(Student)it1.next();
	    	System.out.println(obj);
	    }
	    SortByName sbN=new SortByName();
	    Collections.sort(als,sbN);
	    System.out.println("\nPrint Student objects using Iterator After Sorting Based on Name");
	  
	    it1 = als.iterator();
	    while(it1.hasNext())
	    {	    	
	    	Student obj =(Student)it1.next();
	    	System.out.println(obj);
	    }
	}

}
/*2.	Write a java program to do following operations on ArrrayList
1.	Add elements of String  , Teacher(Id,name, Subject) and student(Rollno, name, course) objects
2.	display all elements using for or iterator.
3.	 Sort the students object based on marks.
*/