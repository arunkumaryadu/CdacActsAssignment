import java.io.IOException;




class Compute7 extends Thread{
	int x;
	int y;
	int z;
	public void setX(int x) {
		this.x = x;
	}
	public void setY(int y) {
		this.y = y;
	}
	public void setZ(int z) {
		this.z = z;
	}
	
	
	public void result() {
		
		System.out.println("sin (x) + cos (y) + tan (z) = "+(Math.cos(this.x)+Math.sin(this.y)+Math.tan(this.z))+" Output By "+Thread.currentThread().getName());
	}
	
}
public class A_sincos {

	public static void main(String[] args) throws InterruptedException {
		
		final Compute7 a = new Compute7();
		
		Thread t1=new Thread(a)
		{
			public void run()
			{
				a.setX(10);
			}
		};
		
		
		Thread t2 =new Thread(a)
		{
			public void run()
			{
				a.setY(20);
			}
		};
		
		
		Thread t3=new Thread(a)
		{
			public void run()
			{
				a.setZ(30);
			}
		};
		t1.start();
		t2.start();
		t3.start();
		t1.join();
		t2.join();
		t3.join();
		Thread t4=new Thread(a)
		{
			public void run()
			{
				a.result();
			}
		};
		t4.start();
	}

}
/*  Q1) Develop a multithreaded application to compute p = sin (x) + cos (y) + tan (z). */