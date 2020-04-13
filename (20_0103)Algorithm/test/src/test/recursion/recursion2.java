package test.recursion;

public class recursion2 {


	public int fib(int n) {

		if(n<=1) {
			return 1;
		}
		else return fib(n-2)+ fib(n-1);
	}

	public static void main(String[] args) {
		recursion2 sol = new recursion2();
		for (int i = 0; i < 10; i++) {
			System.out.println(sol.fib(i));
		}

	}
}
