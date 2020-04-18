package test.solution28;

import java.util.*;

public class Solution28 {
	public int[] solution(int[] heights) {
		int[] answer = {};
		answer = new int[heights.length];

		Stack<Integer> st = new Stack<Integer>();

		
//		배열을 스택에 넣어주기
		for (int i = 0; i < heights.length; i++) {
			st.push(heights[i]);

		}

		
		
		while (!st.isEmpty()) {
			
//			tmp 변수에 보관
			int tmp = st.pop();

//			From Right to Left
			for (int i = st.size(); i >= 0; i--) {

//				문제 조건 ( 송신보다 수신이 더 크면 기록 )
				if (tmp < heights[i]) {
					answer[st.size()] = i + 1;
					break;
				}
			}
		}

		return answer;
	}

	public static void main(String[] args) {
		Solution28 sol28 = new Solution28();

		int heights[] = { 6, 9, 5, 7, 4 };

		sol28.solution(heights);
	}
}
