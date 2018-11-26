import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;


class B{
	String str;
	
	public void writeInFile() throws IOException {
		System.out.println("Please write in File");
		FileWriter fw = new FileWriter("dacFive.txt");
		
		InputStreamReader in = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(in);
		
		while(!(str = br.readLine()).equals("exit"))
		{
			fw.write(str+"\n");
		}
				
		fw.close();		
		System.out.println("file write is over");
	}   
	public int WordCount(String str) {
		int wc=0;
		char a=' ';
		char str1[]=new char [str.length()];
		for (int i = 0; i < str.length(); i++) {
			if(str.charAt(i)==a && str.charAt(i+1)==a){
				
			}else{
				str1[i]=str.charAt(i);
			}
		}
		for(int i=0;i<str1.length;i++){
			if(str1[i]==a){
				wc++;
			}
		}
		return wc;
	}
	public int CharCount(String str) {
		return str.length();
	}
}
public class FiveCount {
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		int charCount=0,wordCount=0,lineCount=0;
		B b=new B();
		b.writeInFile();
		String str1;
		FileReader f1 = new FileReader("dacFive.txt");
		BufferedReader br1 = new BufferedReader(f1);
	    
	    while((str1 = br1.readLine())!=null)
	    {
	    	//System.out.println(str1);
	    	charCount+=b.CharCount(str1);
	    	wordCount+=b.WordCount(str1);
	    	lineCount++;
	    }
	    System.out.println("Number Of Line is ="+lineCount);
	    System.out.println("Number Of Word is ="+(wordCount+1));
	    System.out.println("Number Of Character is ="+(charCount-wordCount+1));
	    br1.close();
	    f1.close();
	}

}
/*5)	Program to count the number of character ,no of word, no of lines in a given file.
*/