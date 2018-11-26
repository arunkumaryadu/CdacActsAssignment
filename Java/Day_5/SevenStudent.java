import java.io.EOFException;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;


class Student implements Serializable{
	private int no;
	private String name;
	private int marks;
	public Student(int i, String string, int j) {
		// TODO Auto-generated constructor stub
		no=i;
		name=string;
		marks=j;
	}
	public String getName() {
		return name;
	}
	public int getMarks() {
		return marks;
	}
	public String toString()
	{
		return no +"  "+ name +"  "+ marks;
		
	}
}
public class SevenStudent {
	public static void main(String[] args) throws IOException, ClassNotFoundException {
		// TODO Auto-generated method stub
		 Student P1=new Student(1,"arun",90);
		 Student P2=new Student(2,"manish",35);
		 Student P3=new Student(3,"Anand",33);
  
     FileOutputStream f1 = new FileOutputStream("dac7.txt");
	 ObjectOutputStream oo = new ObjectOutputStream(f1);
	 
	 
	 oo.writeObject(P1);
	 oo.writeObject(P2);
	 oo.writeObject(P3);
	 System.out.println("Student Details Are Saved");
	 System.out.println("=====================================================");
	oo.close();
	f1.close();
	
	
	 FileInputStream f2 = new FileInputStream("dac7.txt");
	 ObjectInputStream oi = new ObjectInputStream(f2);
	 Student obj;
	 
		 try
		 {
	 
	 while((obj = (Student)oi.readObject())!=null)
	 {
		// System.out.println(obj);
		 if(obj.getMarks()>=35)
			 System.out.println(obj+" Pass");
		 else {
			System.out.println(obj+" Fail");
		}
	 }
		 }catch(EOFException e)
		 {
			 System.out.println("=====================================================");
		 }
	}

}

/*
 * 7)	Write a program to serialize the student object( no,name,marks) Write a
 *  student object into the file and read the same from the file, and find result.
 * */
 