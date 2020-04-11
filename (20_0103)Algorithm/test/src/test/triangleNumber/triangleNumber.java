package test.triangleNumber;

public class triangleNumber {

	public static int triangle_number(int n) {
		
		if(n==1) {
			return 1;
		}
	 	  
		else{
//			System.out.println(triangle_number(n-1));
			int tmp = n+triangle_number(n-1);
			
	 		 return tmp;
			
		}
	}
	public static void main(String[] args) {
		for (int i = 1; i < 11; i++) {
			System.out.println(triangle_number(i));
		}

	}

}
