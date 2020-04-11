package test.recursion;

public class recursion {
	public int solution(int x) {
		int answer = 0;
		
		
		
		return answer ;
	}
	
	public int fib(int n) {
		
			if(n<=1) {
				return 1;
			}
			else 
	
		
		return fib(n-1) +fib(n-2);
		
		
	}
	
	
	
	public static void main(String[] args) {
		recursion sol = new recursion();
for (int i = 0; i < 10; i++) {
	System.out.println(sol.fib(i));
}
			
		
		
		
	}
}
