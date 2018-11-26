import java.io.File;


public class FirstListofAllFileName {

	
	public static void main(String[] args) {

		String dirpath = "D:/DAC47/Arun19/Java/Day1/Session2";
		
		
		File f3 = new File(dirpath);
		
		String[] file = f3.list();
		System.out.println("==========================================");
		System.out.println("List of all file in "+dirpath);
		System.out.println("==========================================");
		for (int i = 0; i < file.length; i++) {
			System.out.println(file[i]);
		}
		System.out.println("==========================================");
	}

}
/*1)	How to get list of all file names from a folder?
*/