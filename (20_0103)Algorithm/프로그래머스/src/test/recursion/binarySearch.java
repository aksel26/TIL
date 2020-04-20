package test.recursion;

import test.linearSearch.linearSearch;

public class binarySearch {
	public int binary_search(int element, int[] list) {
		int answer = 0;
		int sIndex = 0;
		int mid;
		int eIndex = list.length;
		
		if (eIndex == 0 || sIndex == 0) {
			eIndex = list.length - 1;
		}

		else {

			mid = (sIndex + eIndex) / 2;
			if (list[mid] > element) {
				eIndex = mid - 1;
				return binary_search(element, list);

			} else if (list[mid] < element) {
				sIndex = mid + 1;
				return binary_search(element, list);

			} else if (list[mid] == element) {
				answer = mid;
			}

		}
		
		return answer;
	}

	public static void main(String[] args) {
		binarySearch bs = new binarySearch();
//		int[] ls2 = new int[9];

		int[] some_list = { 1, 23, 4, 21, 34, 34 };

//		ls2[0] = 1;
//		ls2[1] = 2;
//		ls2[2] = 3;
//		ls2[3] = 5;
//		ls2[4] = 8;
//		ls2[5] = 13;
//		ls2[6] = 21;
//		ls2[7] = 34;
//		ls2[8] = 55;

		bs.binary_search(1, some_list);
	}
}
