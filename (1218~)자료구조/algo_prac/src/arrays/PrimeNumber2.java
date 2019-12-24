package arrays;
//1000이하의 소수 열거 (버전 2)
public class PrimeNumber2 {

	public static void main(String[] args) {
	int counter=0;
	int ptr=0;
	int [] prime = new int[500];
	
	prime[ptr++] =2;    //2는 소수임
	
	for (int n=3; n<=1000; n+=2) {  //바깥쪽 for문은 홀수만 
		int i ;
		for( i =1;i<ptr;i++) {
			counter++;
			if(n%prime[i]==0)
				break;
		}
		if(ptr==i) {		//마지막까지 나누어 떨어지지 않
			prime[ptr++]=n; // 소수라고 배열에 저
		}
		
		
	}
	for(int i =0; i<ptr;i++) {
		System.out.println(prime[i]);
	}
	System.out.println("나눗셈을 수행하횟수 : " +counter);
}

}


//	출력
//	
//	2
//	3
//	5
//	...
//	991
//	997
//	나눗셈을 수행하횟수 : 14622