import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;

class Server10
{
	String str1,str2;
	ServerSocket ss=null;
	Socket s=null;
	String x;
	
	
	public void readFromSocket() throws IOException {
		 ss = new ServerSocket(8092);
		 s = ss.accept();
		// read from socket5
		InputStream is = s.getInputStream();
		InputStreamReader in = new InputStreamReader(is);
		BufferedReader br = new BufferedReader(in);
		
		 x = br.readLine();
		
		System.out.println("message from client is : "+x);
		
		
	}
	
    
	
		public void writeInsocket() throws IOException {
			//writing to the socket
			String y=x.toUpperCase();
		    OutputStream os = s.getOutputStream();
			PrintStream pr = new PrintStream(os);
		     pr.println(y);
		}
	
		public void ServerClose() throws IOException {
			ss.close();
			s.close();
		}
	}

public class TenServer {
	public static void main(String[] args) throws IOException {
		System.out.println("Server started !!");
		Server10 sr = new Server10();
		while(true){
			
			sr.readFromSocket();
			sr.writeInsocket();
			sr.ServerClose();
		}
		
		

	}

}
