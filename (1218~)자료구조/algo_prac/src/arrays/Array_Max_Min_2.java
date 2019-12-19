package arrays;

import java.util.Random;
import java.util.Scanner;

public class Array_Max_Min_2 {

//난수 사용해 배열의 요솟값 설정하기
	static int maxOf(int[] a) {
		int max=a[0];
		for(int i =0; i<a.length;i++) {
			if(a[i]>max) max=a[i];
			
		}
		return max;
	}
	
	public static void main(String[] args) {
		Random rand= new Random();
		Scanner scn = new Scanner(System.in);
		
		System.out.println("키의 최댓값을 구합니다");
		System.out.print("사람 수 : ");
		
		int num= scn.nextInt();
		
		int height[]=new int[num];
		
		System.out.println("키 값은 아래와 같습니다");
		
		for(int i =0; i<num;i++) {
			height[i]=100 + rand.nextInt(90);
			System.out.println("height[" +i + "] : " +height[i]);
			
		}
		System.out.println("최댓값은 " + maxOf(height)+ " 입니다");
	}

}


//키의 최댓값을 구합니다
//사람 수 : 5
//키 값은 아래와 같습니다
//height[0] : 171
//height[1] : 117
//height[2] : 159
//height[3] : 138
//height[4] : 143
//최댓값은 171 입니다
