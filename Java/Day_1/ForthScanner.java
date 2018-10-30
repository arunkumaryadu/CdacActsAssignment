import java.util.Scanner;


public class ForthScanner {
	public static void printBill(int unit) {
		double bill=0;
		if(unit<=100){
			bill=unit*1.2;
		}
		else if(unit<=300){
			bill=100*1.2+(unit-100)*2;
		}
		else if(unit<=600){
			bill=100*1.2+200*2+(unit-300)*3;
		}
		else if(unit>600){
			bill=100*1.2+200*2+300*3+(unit-600)*5;
		}
		else {
				bill=0;
			}
		System.out.println(bill);
		}
	
	public static void main(String[] args) {
		System.out.println("please Enter total unit");
		Scanner a=new Scanner(System.in);
		int x=a.nextInt();
		printBill(x);
		a.close();
		}
}
