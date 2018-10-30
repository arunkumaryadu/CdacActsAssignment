class Player{
	String cname; 
    int age;
    int run;
    Player(String cname,int run,int age){
    	this.cname=cname;
    	this.run=run;
    	this.age=age;
    }
    public void display() {
		if(this.run>5000){
			System.out.println("Player is                 :"+this.cname);
			System.out.println("Player Account Number is  :"+this.run);
			System.out.println("Player Account age is      :"+this.age);
			
		}
	}
}
public class EightPlayerClass {
	public static void main(String[] args) {
		Player cust[]=new Player[5];
		cust[0]=new Player("Rohit Sharma",7300,31); 
		cust[1]=new Player("Virat Kohali",10200,29); 
		cust[2]=new Player("Shikhar Dhawan",4929,32); 
		cust[3]=new Player("M.S. Dhoni",10170,37); 
		cust[4]=new Player("Raydu",800,33); 
		
		for(int i=0;i<5;i++){
			System.out.println("============================================");
			cust[i].display();
		}
		System.out.println("============================================");
		
	}

}
/*
 9)  write a Java program to create a class called player with name, age ,
  total run as members, create 5 player object using primary constructor 
   and display the details of Cricket Player having more than  5000 runs 

*/
