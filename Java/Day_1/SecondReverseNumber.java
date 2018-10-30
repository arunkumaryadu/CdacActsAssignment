
public class SecondReverseNumber {
	public static void reverse(int x) {
		while(x!=0){
		 System.out.print(x%10);
		 x=x/10;		 
		}		
	}
public static void main(String[] args) {
	reverse(83495266);
}
}
