package sort;

import java.util.Arrays;
import java.util.Scanner;

public class IntSet {
	private int max; // 집합의 최대 개수
	private int num; // 집합의 요소 개수
	private int[] set; // 집합 본체

	public IntSet(int capacity) {
		num = 0;
		max = capacity;
		try {
			set = new int[max]; // 집합 배열 생성
		} catch (OutOfMemoryError e) { // 배열 생성 실패
			max = 0;
		}
	}

//	집합의 최대 개수
	public int capacity() {
		return max;
	}

//	집합의 요소 개수
	public int size() {
		return num;
	}

	public int indexOf(int n) {
		for (int i = 0; i < num; i++) {
			if (set[i] == n)
				return i;

		}
		return -1;

	}

	// 집합에 n 이 있는지 없는지 확인
	public boolean contains(int n) {
		if (num >= max || contains(n) == true) { // 가득 찼거나 이미 n이 존재.
			return false;
		} else {
			set[num++] = n; // 가장 마지막 자리에 n 추가
		}
		return true;
	}

	public boolean add(int n) {
		if (num >= max || contains(n) == true) {
			return false;
		} else {
			set[num++] = n;
		}
		return true;
	}
	// 집합에서 n을 삭제한다.

	public boolean remove(int n) {
		int idx; // n이 저장된 요소의 인덱스

		if (num <= 0 || (idx = indexOf(n)) == -1) { // 비어있거나 n이 존재하지 않
			return false;
		} else {
			set[idx] = set[--num]; // 마지막 요소를 삭제한 곳으로 옮긴다.
			return true;
		}
	}

	// 집합 s에 복사한다.

	public void copyTo(IntSet s) {
		int n = (s.max < s.num) ? s.max : s.num; // 복사할 요소 개수
		for (int i = 0; i < n; i++) {
			s.set[i] = set[i];
		}
		s.num = n;
	}

	// 집합 s를 복사한다.
	public void copyFrom(IntSet s) {
		int n = (max < s.num) ? s.max : s.num;
		for (int i = 0; i < n; i++) {
			set[i] = s.set[i];
		}
		num = n;

	}

//	집합 s와 같은지 확인

	public boolean equalTo(IntSet s) {
		if (num != s.num) {
			return false;

		}

		for (int i = 0; i < num; i++) {
			int j = 0;
			for (; j < s.num; j++) {
				if (set[i] == s.set[j]) {
					break;
				}
				if (j == s.num) {
					return false; // set[i]는 s에 포함되지 않습니다.
				}
			}
		}
		return true;
	}

	public void unionOf(IntSet s1, IntSet s2) {
		copyFrom(s1);
		for (int i = 0; i < s2.num; i++) {
			add(s2.set[i]);
		}
	}
	
	
	

	@Override
	public String toString() {
		StringBuffer temp = new StringBuffer("{");
		for( int i = 0 ; i< num ; i++) {
			temp.append(set[i]+" ");
		}
		temp.append("}");
		return temp.toString();
	}

	
	
//	toString 메서드 :
//		클래스 인스턴스의 데이터를 문자열로 반환하는 메서드
//		
//		클래스에서 정의하는 것이 개발자간의 약속
//		
//	Object클래스를 상속받기 때문에 오버라이드함.
//	이때, 접근 제한을 바꿀 수 없음
	
	
	public static void main(String[] args) {

	}

}
