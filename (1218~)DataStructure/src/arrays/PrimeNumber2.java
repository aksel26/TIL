package arrays;
//1000������ �Ҽ� ���� (���� 2)
public class PrimeNumber2 {

	public static void main(String[] args) {
	int counter=0;
	int ptr=0;
	int [] prime = new int[500];
	
	prime[ptr++] =2;    //2�� �Ҽ���
	
	for (int n=3; n<=1000; n+=2) {  //�ٱ��� for���� Ȧ���� 
		int i ;
		for( i =1;i<ptr;i++) {
			counter++;
			if(n%prime[i]==0)
				break;
		}
		if(ptr==i) {		//���������� ������ �������� ��
			prime[ptr++]=n; // �Ҽ���� �迭�� ��
		}
		
		
	}
	for(int i =0; i<ptr;i++) {
		System.out.println(prime[i]);
	}
	System.out.println("�������� ������Ƚ�� : " +counter);
}

}


//	���
//	
//	2
//	3
//	5
//	...
//	991
//	997
//	�������� ������Ƚ�� : 14622