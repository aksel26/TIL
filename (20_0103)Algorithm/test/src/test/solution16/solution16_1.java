package test.solution16;

public class solution16_1 {
	public int solution(int num) {
	int answer = 0 ;
	
	long n = (long)num ;
	for(int i = 0 ;i < 500 ; i++) {
		if(n==1) return i ;
		n = (n % 2 == 0) ? n/2 :n *3 +1;
	}
	return -1;
	

		
	}

	public static void main(String[] args) {
		solution16_1 sol16 = new solution16_1();
		System.out.println(sol16.solution(626331));
	}
}
