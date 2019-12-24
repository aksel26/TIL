package arrays;

public class Array {

	public static void main(String[] args) {
//		자료구조
//			: 데이터 단위와 데이터 자체 사이의 물리적 또는 논리적인 관계
//				데이터 단위는 ?
//					: 데이터를 구성하는 한 덩어리

//				즉, 자료구조는 자료를 효율적으로 이용할 수 있도록 저장하는 방법!

//				배열
//					: 같은 자료형의 변수로 이루저진 구성 요소 (Component)가 모인 것
//				int[] a;
//				int a[];
//				a = new int[5]; 구성요소의 개수가 5개인 배열 선언
//		의미 > int형의 배열 본체를 생성하고 그것을 변수 a가 "참조" 하도록 설정한다
		
//		배열안의 구성요소는 1) 형은 같고 2) 직선모양
//		배열의 개별 요소에 접근하기  위해서는 ? 
//				[]안에 넣는 정수형 인덱스 : a[1], a[3]
//						
//		구성 요소수 (길이)
//			변수명.length

		int a[] =new int[5];
		a[1]=24;
		a[2]=21;
		a[4]=a[1]*3;
		for(int i =0; i<a.length; i++) {
			System.out.printf("%3d",a[i]);
		}
		System.out.println();						
//		구분하기!
		
//		배열 a의 각 요소들 : int형
//		배열 a의 자료형 : int[5]형		
//		int a[]=new int[5]; 는 a[0],a[1], ... ,a[4] 총 5개의 int형 저장공간 차지
		
//		배열 요솟값을 초기화하며 배열 선언하기
		int b[]= {1,2,3,4,5}; //배열 초기자에 의해 생성
		int c[] = new int[] {1,2,3,4,5}; //생성 방법 2
		for(int i=0;i<b.length;i++) {
			System.out.printf("%3d",b[i]);
		}
		System.out.println();
		for(int i=0;i<c.length;i++) {
			System.out.printf("%3d",c[i]);
		}
		
		System.out.println();

		
	}

}
