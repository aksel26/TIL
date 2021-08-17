package test.recursion;

public class triangleNumber {

	public static int triangle_number(int n) {
		
		if(n<=1) {
			return 1;
		}
	 	  
		else{
			return n + triangle_number(n-1);
			
//			return triangle_number(n-1) + triangle_number(n);
			
			
		}
	}
	public static void main(String[] args) {
		for (int i = 1; i < 11; i++) {
			System.out.println(triangle_number(i));
		}

	}

}
