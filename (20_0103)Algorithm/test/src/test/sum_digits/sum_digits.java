package test.sum_digits;

public class sum_digits {

	public static int sd(int n) {

		if (n < 10) {
			return n;
			
		}else

		return n%10 + sd(n/10);

	}

	public static void main(String[] args) {
		
		System.out.println(sd(704));

	}

}
