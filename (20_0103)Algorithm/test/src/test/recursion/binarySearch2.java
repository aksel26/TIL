package test.recursion;

import test.linearSearch.linearSearch;

public class binarySearch2 {
	public int binary_search(int element, int start, int end, int[] list) {

		if (start > end) {
			return -1;
		} else if (start == end) {
			if (list[start] == element) {
				return start;
			} else
				return -1;
		}

		else {
			int mid = (start + end) / 2;
			if (list[mid] == element)
				return mid;
			else if (list[mid] > element) {
				return binary_search(element, start, mid - 1, list);
			} else
				return binary_search(element, mid + 1, end, list);
		}

	}

	public static void main(String[] args) {
		binarySearch2 bs = new binarySearch2();

		int[] some_list = { 1, 4, 21, 34, 35 };

		System.out.println(bs.binary_search(35, 0, some_list.length - 1, some_list));
	}
}
