
class ElectricityBill{
	int customerNumber, unitsConsumed ;
	String customerName;
	public void readData(int customerNumber,String customerName,int unitsConsumed){
		this.customerNumber=customerNumber;
		this.customerName=customerName;
		this.unitsConsumed=unitsConsumed;
	}
	public void showData() {
		System.out.println("customer Number is : "+this.customerNumber);
		System.out.println("customer Name is   : "+this.customerName);
		System.out.println("units Consumed is  : "+this.unitsConsumed);
	}
    public double computeBill() {
    	double bill=0;
		if(this.unitsConsumed<=100){
			bill=this.unitsConsumed*1.2;
		}
		else if(this.unitsConsumed<=300){
			bill=100*1.2+(this.unitsConsumed-100)*2;
		}
		else if(this.unitsConsumed<=600){
			bill=100*1.2+200*2+(this.unitsConsumed-300)*3;
		}
		else if(this.unitsConsumed>600){
			bill=100*1.2+200*2+300*3+(this.unitsConsumed-600)*5;
		}
		else {
				bill=0;
			}
		return bill;
	}
}
public class SixthClass {
	public static void main(String[] args) {
		int customerNumber=1002, unitsConsumed=320 ;
		String customerName="Arun";
		ElectricityBill obj=new ElectricityBill();
		obj.readData(customerNumber, customerName, unitsConsumed);
		obj.showData();
		System.out.println("Electricity charges to be paid : "+obj.computeBill());
     
	}

}
/*6.	 Create a class Electricity bill with data members as customer number, customer name, units consumed and methods as follows:

1. 	readData() - to read the values of data menbers.
2.	showData - to display the values of data members
3.	computeBill() - to calculate and return electricity charges to be paid.calculate 			the bill as specified in Question 7 

Read customer object values, calculate electricity bill and display the values.
*/