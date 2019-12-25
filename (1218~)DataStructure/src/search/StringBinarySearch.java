package search;

import java.util.Arrays;
import java.util.Scanner;

//자연정렬
//사람이 보기 좋게 정렬된 것.

public class StringBinarySearch {
	
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		
//		자연정렬 되어있는 걸로 가정
		String[] x = {
				"boolean", "assert" , "string" , "break", "byte","case","do","char"
		};
		System.out.println("원하는 키워드를 입력하세요 : ");
		String ky = scn.next();
		
		int idx = Arrays.binarySearch(x, ky);
		
		if(idx<0) {
			System.out.println("해당 키워드 값이 없다.");
			
		}else {
			System.out.println("해당 키워드는 x[" +idx + "]에 있다.");
		}
	}

}


//	출력
//	
//	원하는 키워드를 입력하세요 : 
//		do
//		해당 키워드는 x[6]에 있다.
