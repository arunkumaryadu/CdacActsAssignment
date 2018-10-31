
public class SecondCommandLineAru {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int res=0;
		for(int i=0;i<args.length;i++){
			System.out.println(args[i]);
		res=res+Integer.parseInt(args[i]);
		}
		System.out.println("========================================");
		System.out.println(res);

	}

}
/*
 * 2) Write a program that reads an unspecified number of integer arguments from the 
 * command line and adds  them together to print the result.
For example, suppose that you enter the following to run your java program Adder.java:
java Adder 1 3 2 10 The program should display 16, which is the addition of 1, 3, 2
 and 10. The program should display an error message if the user enters only one argument.

 * */
