abstract class BankAccount{
	double balance;
	long accountNo;
	String name;
	BankAccount(double balance,long accountNo,String name){
		this.balance=balance;
		this.accountNo=accountNo;
		this.name=name;
	}
	public void getBalance() {
		System.out.println(this.name+" Your Account Balance is : "+this.balance);
	}
	public abstract void Withdraw(int amount);
	public abstract void deposit (int amount);
	
}
class SavingAccount extends BankAccount{
	SavingAccount(double balance, long accountNo, String name) {
		super(balance, accountNo, name);
		// TODO Auto-generated constructor stub
	}

	public void addInterest() {
		
	}

	public void Withdraw(int amount) {
		// TODO Auto-generated method stub
		if (amount<=super.balance) {
			super.balance=super.balance-amount;
			System.out.println(amount + " is Withdraw from your Account");
			}
		else{
			System.out.println("You have Not enough balance");
		}
		//System.out.println(super.balance + " is  your Current Account Balance");
		
	}

	public void deposit(int amount) {
		// TODO Auto-generated method stub
		super.balance=super.balance+amount;
		System.out.println(amount + " is deposited in your Account");
		
	}
}
class CheckingAccount extends BankAccount{
	CheckingAccount(double balance, long accountNo, String name) {
		super(balance, accountNo, name);
	}

	public void deductFees(int amount) {
		double deductfee;
		if (amount<1000) {
				deductfee=(amount*10)/100;		
		}
		else if (amount>=1000 && amount<2000) {
			deductfee=(amount*8)/100;	
		}
		else if (amount>=2000 && amount<5000) {
			deductfee=(amount*5)/100;
		}
		else {
			deductfee=(amount*2)/100;
		}
		super.balance=super.balance-deductfee;
		System.out.println(deductfee + " is Extra charge of Withdrawing");		
	}

	public void Withdraw(int amount) {
		if (amount<=super.balance) {
			super.balance=super.balance-amount;
			System.out.println(amount + " is Withdraw from your Account");
			deductFees(amount);
			}
		else{
			System.out.println("You have Not enough balance");
		}	
		
	}

	public void deposit(int amount) {
		super.balance=super.balance+amount;
		System.out.println(amount + " is deposited in your Account");		
	}
}
public class SevenBank {
	public static void main(String[] args) {
		System.out.println("========================================");
		SavingAccount Anand = new SavingAccount(5000,981,"Anand Saurav");
		Anand.getBalance();
		Anand.Withdraw(1000);
		Anand.getBalance();
		Anand.deposit(50000);
		Anand.getBalance();
		System.out.println("========================================");
		SavingAccount Arun = new SavingAccount(3000,982,"Arun Kumar");
		Arun.getBalance();
		Arun.Withdraw(200);
		Arun.getBalance();
		Arun.deposit(500000);
		Arun.getBalance();
		System.out.println("========================================");
		
		System.out.println("========================================");
		CheckingAccount Manish = new CheckingAccount(15000,981,"Manish barasker");
		Manish.getBalance();
		Manish.Withdraw(9000);
		Manish.getBalance();
		Manish.deposit(2000);
		Manish.getBalance();
		System.out.println("========================================");
		CheckingAccount Aditya = new CheckingAccount(30000,982,"Aditya mahule");
		Aditya.getBalance();
		Aditya.Withdraw(20000);
		Aditya.getBalance();
		Aditya.deposit(1000);
		Aditya.getBalance();
		System.out.println("========================================");
       
	}

}
