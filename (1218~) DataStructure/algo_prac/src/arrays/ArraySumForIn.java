package arrays;

		
//		다차원 배열의 내부
//			변수 선언과 본체 생성을 동시에 하고 있다.
//				int [][]x = new int [2][4]; 
//			개별적으로 나누면 ?
//				int[][] x;
//				x = new int [2][];
//				x[0]= new [4];
//				x[1]= new [4];
//		
//				
//		배열에 관한 보충
//		1. 빈 배열
//			배열 요솟수가 0일때.
//		2.배열 요소의 접근	
//			배열 요솟수 이상으로 접근시 IndexOutOfBoundsException 오류 발생
//		3.배열 초기화의 쉼표
//			int[] a = {12,33,4,5,};
//			요솟수 이상의 값은 모두 0으로 초기화 됨
//			추가로, 한 행의 초기화 삽입 시 쉼표를 빠뜨리는 것을 방지하는 효과
//			
//		다차원 배열의 복제
//			변수명.clone();
//			
//		확장 for문 
//			장점 : 배열의요솟수( 길이 )를 조사하는 수고를 덜 수 있다.
//				  iterator와 같은 방법으로 스캔할 수 있다.
//			배열의 인덱스 자체의 값이 필요하지 않을 때 유용하다.
	
public class ArraySumForIn {
//	배열의 모든 요소의 합을 구해 출력함(확장 for문 )
	public static void main(String[] args) {
		double a[] = {1.0,2.0,3.0,4.0,5.0};
		
		for (int i =0; i<a.length; i++) {
			System.out.println("a[" + i + "] = " + a[i] );
		}
	int sum=0;

//	확장 for문 "for-in문"
	for (double i : a)
		sum +=i;
	System.out.println("모든 요소의 합은 :" + sum);
	}

}


//			a[0] = 1.0
//			a[1] = 2.0
//			a[2] = 3.0
//			a[3] = 4.0
//			a[4] = 5.0
//			모든 요소의 합은 :15
