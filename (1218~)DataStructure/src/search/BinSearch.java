package search;

import java.util.Scanner;

//	이진 검색
//	전제조건 : 데이터가 키 값으로 이미 졍렬 되어 있다.
//	(선형검색보다 좀 더빠르게 검색할 수 있다는 장점.)
public class BinSearch {
	
//	요솟수가 n인 배열 a에서 key와 같은 요소를 이진 검색한다.
	static int binSearch(int[]a , int n , int key) {
		int pl = 0;			//pl : 검색 범위의 첫 인덱
		int pr = n -1;		//pr : 검색 범위의 끝 인덱
		
		do {
			int pc= (pl+pr)/2;
			if(a[pc] ==key) {
				return pc; 		//검색 성공!
				
			}else if(a[pc]<key){
				pl= pc+1;		 //검색 범위를 뒤쪽으로 절반으로 좁
			}else {
				pr=pc-1; //검색 범위를 앞쪽 절반으로 좁
			}
			
		}while(pl<=pr);
		return -1; //검색 실
		
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("요솟 수 : ");
		int num =scn.nextInt();
		int x[] = new int[num]; //요솟수가 num 인 배
		
		System.out.println("오름차순으로 입력하세요");

		System.out.println("x[0]:"); //첫 요소 입력
		x[0]=scn.nextInt();
		
		for(int i = 1; i<num ; i++) {
			do {
				System.out.println("x[" + i +"]");
				x[i]= scn.nextInt();
				
				
			}while(x[i]<x[i-1]);		//바로 앞의 요소보다 작으면 다시 입
		}
		
		System.out.println("검색할 값 : ");
		int ky = scn.nextInt();
		
		int idx = binSearch(x, num, ky);
		
		if(idx==-1) {
			System.out.println("요소 없음");
		}else {
			System.out.println(ky+"은 x[" +idx+"]");
		}
				
	}

}

//	출력

//	요솟 수 : 
//		3
//		오름차순으로 입력하세요
//		x[0]:
//		2
//		x[1]
//		1
//		x[1]
//		2
//		x[2]
//		3
//		검색할 값 : 
//		4
//		요소 없음

