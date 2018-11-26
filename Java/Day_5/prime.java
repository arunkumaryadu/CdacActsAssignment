
public class prime {

	/**
	 * @param args
	 */
	static String str2;
	public static void main(String[] args) {
		int x=11;
		 boolean IsPrime=false;
    	 for (int i = 2; i < x; i++) {
    		 if(x % i==0){
    			 IsPrime=false;
    			}
    		 else{
    				IsPrime=true;
    			}
    		 
		}
    	 if(IsPrime==true){
    		 str2="Prime";
    	 }
    	 else {
    		 str2="Not Prime";
		}
    System.out.println(str2);
	}

}
