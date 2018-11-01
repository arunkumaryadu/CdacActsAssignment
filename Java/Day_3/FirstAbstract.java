
abstract class Bank{
	double balance;
	long accountNo;
	String name;
	double loanAmount;
	Bank(double balance,long accountNo,String name,double loanAmount){
		this.balance=balance;
		this.accountNo=accountNo;
		this.name=name;
		this.loanAmount=loanAmount;
	}
	
	public void AccountDetails(){
		System.out.println("Account Holder Name is : "+this.name);
		System.out.println("Account Number is      : "+this.accountNo);
		System.out.println("Account Balance is     : "+this.balance);
	}
	public void LoanDetails() {
		System.out.println("Loan Amount is : "+loanAmount);
	}
	abstract public float  rateOfInterest();
}
class SBI extends Bank{

	SBI(double balance, long accountNo, String name,double loanAmount) {
		super(balance, accountNo, name, loanAmount);
		}

	public float rateOfInterest() {
		float rate = (float) 5.5;
		return rate;		
	}
	
}
class ICICI extends Bank{

	ICICI(double balance, long accountNo, String name,double loanAmount) {
		super(balance, accountNo, name, loanAmount);
		
	}

	public float rateOfInterest() {
		float rate = (float) 6.5;
		return rate;		
		
	}
	
}
class HDFC extends Bank{

	HDFC(double balance, long accountNo, String name,double loanAmount) {
		super(balance, accountNo, name, loanAmount);
	
	}

	public float rateOfInterest() {
		float rate = (float) 7.5;
		return rate;		
		
	}
	
}
public class FirstAbstract{
	public static void main(String[] args) {
		System.out.println("======================================");
		Bank cust1=new HDFC(80000,1,"arun",0);
		cust1.AccountDetails();
		cust1.LoanDetails();
		System.out.println(cust1.rateOfInterest());
		System.out.println("======================================");
		Bank cust2=new SBI(30000,1,"Anand",40000);
		cust2.AccountDetails();
		cust2.LoanDetails();
		System.out.println(cust2.rateOfInterest());
		System.out.println("======================================");
		Bank cust3=new ICICI(3000,1,"Manish",30000);
		cust3.AccountDetails();
		cust3.LoanDetails();
		System.out.println(cust3.rateOfInterest());
		System.out.println("======================================");
		
	}
}

/*1. Create  an abstract class called Bank and implement two methods AccountDetails(), 
 * LoanDetails() and one abstract method rateOfInterest() .
 *  create classes SBI , ICICI 
 * and HDFC that extends Bank abstract class and implement the rateOfInterest() .
 *  In a class CustomerAccount , create customers of SBI, ICICI and HDFC and then 
 *  display account  and loan details of  customer along with rate of interest.*/
 