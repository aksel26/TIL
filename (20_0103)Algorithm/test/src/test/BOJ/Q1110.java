package test.BOJ;

import java.util.Scanner;

public class Q1110 {

	public int solution(int num) {
		int cnt = 0;
		String rst = "";
		String[] str = {};

		
		
		while(!str.equals(num)) {
		str = Integer.toString(num).split("");

		int ten = Integer.parseInt(str[0]);
		int one = Integer.parseInt(str[1]);

		int result = one + ten;
		if(result<10){
			rst = str[1] + Integer.toString(result);
			
		}else if(result>10) {
			rst = str[1] + Integer.toString(result).charAt(1);
			
		}
		
		num = Integer.parseInt(rst);
		System.out.println(num);
		
		cnt++;
		}
		

//		while (!str.equals(num)) {
//			if (str.length() != 1) {
//				int ten = str.charAt(0);
//				int one = str.charAt(1);
//				int result = one + ten;
//				
//				str = Integer.toString(one) + Integer.toString(result).charAt(1);
//				cnt++;
//				break;
//			} else if (str.length() == 1) {
//				
//				str = "0" + str.charAt(0);
//
//				char ten = str.charAt(0);
//				int iten = (int)(ten);
//				
//				char one = str.charAt(1);
//				int result = (int)(one + ten);
////				System.out.println(result);
//				
//				str = Integer.toString(one) + Integer.toString(result).charAt(1);
//				cnt++;
//				break;
//			}
//		}

		return cnt;
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		Q1110 q = new Q1110();
		q.solution(scn.nextInt());

	}

}
