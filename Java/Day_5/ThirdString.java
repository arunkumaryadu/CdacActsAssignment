import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;


class A{
	String str;
	
	public void writeInFile() throws IOException {
		System.out.println("Please write in File");
		FileWriter fw = new FileWriter("dac.txt");
		
		InputStreamReader in = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(in);
		
		while(!(str = br.readLine()).equals("exit"))
		{
			fw.write(str+"\n");
		}
				
		fw.close();		
		System.out.println("file write is over");
	}   
}
public class ThirdString {
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		String str1;
		A a=new A();
		a.writeInFile();
		
		FileReader f1 = new FileReader("dac.txt");
		BufferedReader br1 = new BufferedReader(f1);
	    
	    while((str1 = br1.readLine())!=null)
	    {
	    	System.out.println(str1);	
	    }
	    br1.close();
	    f1.close();
	}

}


/*
 * 3)	How to write string content to a file and how to read file content line by line?
 * */
 