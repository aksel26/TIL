package test.binarySearch;

import test.linearSearch.linearSearch;

public class binarySearch {
	public int binary_search(int element, int[] some_list) {
		int answer = 0;
		
		int mid ;
		int left = 0;
		int right = some_list.length-1;
		
		while(right>=left) {
			mid = (right+left) /2	;
			
			if(element ==some_list[mid]) {
				answer = mid;
				break;
			}
			
			if(element<some_list[mid]) {
				right = mid -1;
			}else {
				left = mid +1;
			}
		}
		
		System.out.println(answer);
		return answer;
	}

	public static void main(String[] args) {
		binarySearch bs = new binarySearch();
//		int[] ls2 = new int[9];
		
		int[] some_list = {1,23,4,21,34,34};
		
//		ls2[0] = 1;
//		ls2[1] = 2;
//		ls2[2] = 3;
//		ls2[3] = 5;
//		ls2[4] = 8;
//		ls2[5] = 13;
//		ls2[6] = 21;
//		ls2[7] = 34;
//		ls2[8] = 55;

		bs.binary_search(21, some_list);
	}
}
