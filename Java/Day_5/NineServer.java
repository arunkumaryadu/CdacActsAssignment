import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;

class Server9
{
	String str1,str2;
	ServerSocket ss=null;
	Socket s=null;
	int x;
	
	
	public void readFromSocket() throws IOException {
		 ss = new ServerSocket(8092);
		 s = ss.accept();
		// read from socket5
		InputStream is = s.getInputStream();
		InputStreamReader in = new InputStreamReader(is);
		BufferedReader br = new BufferedReader(in);
		
		 x = Integer.parseInt(br.readLine());
		
		System.out.println("message from client is "+x);
		
		
	}
	public void evenOdd() {
		if(this.x %2==0){
			str1="Given Number is Even";
		}
		else{
			str1="Given Number is Odd";
		}
	}
     public void Prime() {
    	 boolean IsPrime=false;
    	 for (int i = 2; i < this.x; i++) {
    		 if(this.x % i==0){
    			 IsPrime=false;
    			}
    		 else{
 				IsPrime=true;
 			}
    		 
		}
    	 if(IsPrime==true){
    		 str2="Prime";
    	 }
    	 else {
    		 str2="Not Prime";
		}
		
	}
	public void readFromConsole() throws IOException {		  
		
				InputStreamReader in1 = new InputStreamReader(System.in);
				BufferedReader br1 = new BufferedReader(in1);
				 str1 =br1.readLine();
	}
		
		public void writeInsocket() throws IOException {
			//writing to the socket
			
		    OutputStream os = s.getOutputStream();
			PrintStream pr = new PrintStream(os);
		     pr.println(str1+" And "+str2);
		}
	
		public void ServerClose() throws IOException {
			ss.close();
			s.close();
		}
	}

public class NineServer {
	public static void main(String[] args) throws IOException {
		System.out.println("Server started !!");
		Server9 sr = new Server9();
		while(true){
			
			sr.readFromSocket();
			//sr.readFromConsole();
			sr.Prime();
			sr.evenOdd();
			sr.writeInsocket();
			sr.ServerClose();
		}
		

	}

}
