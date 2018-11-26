import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;


class R7 extends Thread{
	String fname;
	//FileReader f1;  //"threadTxt1.txt"
	BufferedReader br1;
	static boolean IsSleep1=true;
	
	
	public void setFname(String fname) {
		this.fname = fname;
	}
	
	
	public synchronized void ReadFirstFile(String fname) throws IOException, InterruptedException {
		String str1;
		FileReader f1=null;
		BufferedReader br1=null;
		try {
			 f1 = new FileReader(fname);
			 br1 = new BufferedReader(f1);
			 while((str1 = br1.readLine())!=null)
				{
					System.out.println(str1+"   -> By Thread "+Thread.currentThread().getName());
					if (IsSleep1) {
						IsSleep1=false;
						notify();	
						wait();						
					}
				}
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} 
		finally{
			br1.close();
		    f1.close();
		}
		
		
	}
     public synchronized void ReadSecondFile(String fname) throws IOException, InterruptedException {
    	 String str1;
 		FileReader f1=null;
 		BufferedReader br1=null;
 		try {
 			 f1 = new FileReader(fname);
 			 br1 = new BufferedReader(f1);
 			 while((str1 = br1.readLine())!=null)
 				{
 					System.out.println(str1+"   -> By Thread "+Thread.currentThread().getName());
 					if (!IsSleep1) {
 						IsSleep1=true;
 						notify();
 						wait();						
					}			
 				}
 		} catch (FileNotFoundException e) {
 			
 			e.printStackTrace();
 		} catch (IOException e) {
 			
 			e.printStackTrace();
 		} 
 		finally{
 			br1.close();
 		    f1.close();
 		}
	}    
    
    
}
public class B_ThreadWithFile {

	public static void main(String[] args) throws InterruptedException {
				
     final R7 t1 = new R7();
		
     Thread s1=new Thread(t1)
		{
			public void run()
			{
				try {
					t1.ReadFirstFile("threadTxt1.txt");
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
		};
				
		
		Thread s2=new Thread(t1)
		{
			public void run()
			{
				try {
					t1.ReadSecondFile("threadTxt2.txt");
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
		};
		s1.start();
		s2.start();
		s1.join();
		s2.join();
		s1.stop();
	    s2.stop();
		
		
	}

}
