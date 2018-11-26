import java.io.EOFException;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;


class Person implements Serializable{
	private int no;
	private String name;
	private int sal;
	public Person(int i, String string, int j) {
		// TODO Auto-generated constructor stub
		no=i;
		name=string;
		sal=j;
	}
	public String getName() {
		return name;
	}
	public String toString()
	{
		return no +"  "+ name +"  "+ sal;
		
	}
}
public class FourObject {
	public static void main(String[] args) throws IOException, ClassNotFoundException {
		// TODO Auto-generated method stub
		 Person P1=new Person(1,"arun",10000);
		 Person P2=new Person(2,"manish",1000);
		 Person P3=new Person(3,"Anand",100000);
  
     FileOutputStream f1 = new FileOutputStream("dac2.txt");
	 ObjectOutputStream oo = new ObjectOutputStream(f1);
	 
	 
	 oo.writeObject(P1);
	 oo.writeObject(P2);
	 oo.writeObject(P3);
	 System.out.println("object write is over");
	
	oo.close();
	f1.close();
	
	
	 FileInputStream f2 = new FileInputStream("dac2.txt");
	 ObjectInputStream oi = new ObjectInputStream(f2);
	 Person obj;
	 
		 try
		 {
	 
	 while((obj = (Person)oi.readObject())!=null)
	 {
		 System.out.println(obj);
	 }
		 }catch(EOFException e)
		 {
			 System.out.println("reached eof");
		 }
	}

}

/*
 * 4)	Write a program to store person details(no,name,sal) into a file and  read and display 
 * file content(person detail) on console?
 * */
 