import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;

class FileCopy{
	String str;
	public void writeInFile() throws IOException {
		System.out.println("Please write in Source File");
		FileWriter fw = new FileWriter("dac6.txt");
		
		InputStreamReader in = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(in);
		
		while(!(str = br.readLine()).equals("exit"))
		{
			fw.write(str+"\n");
		}
				
		fw.close();		
		System.out.println("file write is over");
	}  
	
	public void copyInFile() throws IOException {
		String str1;
		System.out.println("File is coping....");
		FileWriter fw = new FileWriter("dac6a.txt");
		
		FileReader f1 = new FileReader("dac6.txt");
        BufferedReader br1 = new BufferedReader(f1);
	    
	    while((str1 = br1.readLine())!=null)
	    {
	    	fw.write(str1+"\n");	
	    }
		
	    br1.close();
	    f1.close();		
		fw.close();		
		System.out.println("file coping is over");
	}  
	public void readFromFile() throws IOException {
		String str1;
		System.out.println("Printing Destination File content....");
		
		FileReader f1 = new FileReader("dac6a.txt");
        BufferedReader br1 = new BufferedReader(f1);
	    
	    while((str1 = br1.readLine())!=null)
	    {
	    	System.out.println(str1);
	    	
	    }
		
	    br1.close();
	    f1.close();		
		
		System.out.println("file read is over");
	}  
}
public class SixFileCopy {

	public static void main(String[] args) throws IOException {
		
		FileCopy a=new FileCopy();
		a.writeInFile();
		a.copyInFile();
		a.readFromFile();
		
	}

}
/*6)	Read source and destination file from the user as an argument. Copy the contents of
 *  the source into another destination file in a faster, efficient way. Use any of the 
 *  streams provided under Java IO.
 */