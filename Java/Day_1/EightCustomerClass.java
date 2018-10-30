class Customer{
	String cname; 
    double balance;
    long accountno;
    Customer(String cname,long accountno,double balance){
    	this.cname=cname;
    	this.accountno=accountno;
    	this.balance=balance;
    }
    public void display() {
		if(this.balance>5000){
			System.out.println("Customer is                 :"+this.cname);
			System.out.println("Customer Account Number is  :"+this.accountno);
			System.out.println("Customer Account Balance is :"+this.balance);
			
		}
	}
}
public class EightCustomerClass {
	public static void main(String[] args) {
		Customer cust[]=new Customer[5];
		cust[0]=new Customer("Arun",834952660,8000); 
		cust[1]=new Customer("Manish",898901074,9000); 
		cust[2]=new Customer("Aditya",123456,18000); 
		cust[3]=new Customer("Anand",987654,6000); 
		cust[4]=new Customer("Priya",834952660,4000); 
		
		for(int i=0;i<5;i++){
			System.out.println("============================================");
			cust[i].display();
		}
		System.out.println("============================================");
		
	}

}
/*
 8) write a Java program to create a Customer class with three member variable cname 
    ,accountno, balance , create five  Customer object- use primary constructor and 
     write a method to display all the details of the customer having   balance more
      than 5000.

*/
