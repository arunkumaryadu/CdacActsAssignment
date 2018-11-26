import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;

class Server11
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
		
		System.out.println("Number from client is : "+x);
		
		
	}
	public void generateFibonacci() {
		int first,second,res;
		int arr[]=new int[10];
		for (int i = 0; i < arr.length; i++) {
			if(i<2){
				arr[i]=i;
			}
			else {
				first=arr[i-2];
				second=arr[i-1];
				
			}
		}
	}
    
	
		public void writeInsocket() throws IOException {
			//writing to the socket
			
		    OutputStream os = s.getOutputStream();
			PrintStream pr = new PrintStream(os);
		     pr.println();
		}
	
		public void ServerClose() throws IOException {
			ss.close();
			s.close();
		}
	}

public class ElevenServer {
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
