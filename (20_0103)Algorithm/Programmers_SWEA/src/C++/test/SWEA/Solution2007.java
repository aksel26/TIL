package test.SWEA;

import java.util.Scanner;

class Solution2007 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {

			String[] input = sc.next().split("");

			// 최대길이 30, 마디 최대길이 10이므로 30/3
			for (int j = input.length / 3; j > 0; j--) {
//				if (input[j - 1].equals(input[0])) {

//					System.out.println("#" + i + " " + (j - 1));
				if (input[(j - 1) / 2].equals(input[0])) {
					System.out.println("#" + i + " " + (j - 1) / 2);
					break;

				} else if (input[j - 1].equals(input[0])) {

					if (input[(j - 1) / 3].equals(input[0])) {
						System.out.println("#" + i + " " + (j - 1) / 3);
						break;
					}
					System.out.println("#" + i + " " + (j - 1));
					break;
				}
			}
		}

//		}

	}
}



//	=======================================================
//	
//	비교하는 방법
//	1. 최대 30줄에 최대 10마디 
//		30/3 으로 연산 수를 나누고,
//	2. 인덱스 0을 고정으로 마지막 인덱스 10과 비교하고, 10, 9, 8 로 줄이면서 비교
//	
//	문제점 : 
//		ABCABCABC 같은 마디가 작은 것들은 끝번호가 출력된다.
//		해결하기 위해 단위를 더 나누었지만 너무 복잡해지고 비효율적이였다.
//		
//		
//		
//	다른사람의 코드 
//		
//		비교 방법:
//			substring 사용 (substring(0,i), substring(i, i+i))
//			비교 변수와 비교 대상 변수 사용
//			
//	
//	substring 생각은 해봤지만 낯설어서 사용하지 않음..낯설어서...낯설어서..낯설어서.
