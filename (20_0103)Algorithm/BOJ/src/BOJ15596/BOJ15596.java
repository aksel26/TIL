package BOJ15596;

public class BOJ15596 {

	public long Test(int[] a) {
		int sum = 0;
		
		for (int i = 0; i < a.length; i++) {
			sum += a[i];
		}
		
		

		return sum;
	}

	public static void main(String[] args) {
		BOJ15596 test = new BOJ15596();
		int a[] = {1,3,4,5};
		
		
		test.Test(a);
	}
}
