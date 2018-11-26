import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;


class Server2
{
	String str1;
	ServerSocket ss=null;
	Socket s=null;
	
	public void readFromSocket() throws IOException {
		 ss = new ServerSocket(1235);
		 s = ss.accept();
		// read from socket5
		InputStream is = s.getInputStream();
		InputStreamReader in = new InputStreamReader(is);
		BufferedReader br = new BufferedReader(in);
		
		String str = br.readLine();
		
		System.out.println("message from client is "+str);
		
		
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
		     pr.println(str1);
		}
	
		public void ServerClose() throws IOException {
			ss.close();
			s.close();
		}
	
		
			
				
				
	
}

public class EightChat {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		System.out.println("Server started !!");
		Server2 sr = new Server2();
		while(true){
			
			sr.readFromSocket();
			sr.readFromConsole();
			sr.writeInsocket();
			sr.ServerClose();
		}
		
		
	}

}
