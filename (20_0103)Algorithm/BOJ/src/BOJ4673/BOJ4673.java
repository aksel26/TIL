package BOJ4673;

public class BOJ4673 {

	public static void main(String[] args) {
		int number = 10000;
		int result = 0 ;
		int a[] = new int[number +10000];
		for (int i = 1; i <= number; i++) {
			a[i] = i;
			
		}

		for (int j = 1; j <= number; j++) {
			result = j + j / 10 + j % 10;
			
			a[result] = 0;
			if(a[j]!=0) {
				System.out.println(a[j]);	
			}
			
		}
		

	}

}
