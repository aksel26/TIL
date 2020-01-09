package sort;

import java.util.Arrays;
import java.util.Scanner;

public class ArraySortTester {
	
//	ArraySort메서드를 이용해 QuickSort

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		
		System.out.println("요솟 수 : ");
		int num = scn.nextInt();
		
		int[] x= new int[num];
		
		for(int i = 0 ; i< num ; i++) {
			System.out.print("x["+i+"] : ");
			x[i] = scn.nextInt();
			
		}
		
		Arrays.sort(x);
		
		System.out.println("오름차순으로 정리하였습니다.");
		for(int i = 0 ; i<num ; i++) {
			System.out.println("x[" + i + "] = "+ x[i]);
		}
				
		
		
	}

}



//	출력

//	요솟 수 : 
//	8
//	x[0] : 5
//	x[1] : 7
//	x[2] : 9
//	x[3] : 5
//	x[4] : 3
//	x[5] : 4
//	x[6] : 2
//	x[7] : 1
//	오름차순으로 정리하였습니다.
//	x[0] = 1
//	x[1] = 2
//	x[2] = 3
//	x[3] = 4
//	x[4] = 5
//	x[5] = 5
//	x[6] = 7
//	x[7] = 9
