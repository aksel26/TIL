package search;

import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;


public class PysicalExamination {


	static class PhyscData {
		private String name;
		private int height;
		private double vision;

		// 생성자
		public PhyscData(String name, int height, double vision) {
			this.name = name;
			this.height = height;
			this.vision = vision;
		}
		
//		문자열을 반환하는 메서드(정보 확인용) 
		public String toString() {
			return name + "" + height + "" + vision;
		}
		
//		오름차순으로 정렬하기 위한 comparator
		public static final Comparator<PhyscData> HEIGHT_ORDER = new HeightOrderComparator();
		
		
		private static class HeightOrderComparator implements Comparator<PhyscData> {
			public int compare(PhyscData d1, PhyscData d2) {
				return (d1.height> d2.height) ? 1:
					   (d1.height< d2.height) ? -1:0;    //d1 이 더 크다면 양수(1) 반환, d2가 더 크다면 음수, 같다면 0 을 반
			}
		}
		
	}


//	제네릭
//		:처리해야 할 대상의	자료형에 의존하지 않는 클래스(인터페이스)구현 방식
		

	
	
	
	
	
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		PhyscData[] x= {
				new PhyscData("이나영",162,0.3),
				new PhyscData("유지훈",168,0.7),
				new PhyscData("김한결",169,2.0),
				new PhyscData("홍준기",171,1.5),
				new PhyscData("전서현",174,0.4),
				new PhyscData("이호연",176,1.2),
				new PhyscData("이수민",180,0.8),
				
		};
		
		
		
		System.out.println("===== 몇cm 를 찾고 있니? =====");
		int height= scn.nextInt();	//	키 값 입력
		int idx  = Arrays.binarySearch(
				x, //배열 x에서
				new PhyscData("", height, 0.0), //키가 height인 요소를
				PhyscData.HEIGHT_ORDER);	// HEIGHT_ORDER에 의해 검색
		
		
		if (idx<0) {
			System.out.println("요소 없음");
		}else {
			System.out.println("x[" + idx +"]에 있다.");
			System.out.println("찾은 데이터 : " +x[idx]);
		}
	}

}


//		출력

//		===== 몇cm 를 찾고 있니? =====
//		180
//		x[6]에 있다.
//		찾은 데이터 : 이수민1800.8


