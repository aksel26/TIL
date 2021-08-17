package test.binarySearch;

import test.linearSearch.linearSearch;

public class binarySearch2 {
	public int binary_search(int element, int[] some_list) {
		int answer = 0;
		int lidx = some_list.length;

		int fidx = 0;
		int midx = 0;

		midx = (lidx + fidx) / 2;

		if (some_list[midx] == element) {
			answer = midx;

		} else if (some_list[midx] != element) {

			if (some_list[midx] > element) {
				lidx = midx - 1;
				midx = (fidx + lidx) / 2;

				if (some_list[midx] < element) {
					fidx = midx + 1;
					lidx = lidx;
					midx = (fidx + lidx) / 2;

				}
				if (some_list[midx] == element) {

					answer = midx;

				}

			} else if (some_list[midx] < element) {
				fidx = midx + 1;
				midx = (fidx + lidx) / 2;
				if (some_list[midx] == element) {
					answer = midx;

				} else if (some_list[midx] < element) {

					fidx = midx + 1;
					midx = (fidx + lidx) / 2;

					if (some_list[midx] == element) {
						answer = midx;

					} else if (some_list[midx] < element) {
						fidx = fidx + 1;
						midx = (fidx + lidx) / 2;
						if (some_list[midx] == element) {
							answer = midx;
						}
					}
				} else if (some_list[midx] > element) {

					lidx = midx;
					System.out.println(lidx);
					midx = (lidx + fidx) / 2;
					System.out.println(lidx);
					if (some_list[midx] == element) {
						answer = midx;
					} else if (some_list[midx] > element) {
						lidx = lidx - 1;
						midx = (lidx + lidx) / 2;
						if (some_list[midx] == element) {
							answer = midx;
						}
					}
				}
			}
		}
		System.out.println(answer);

		return answer;
	}

	public static void main(String[] args) {
		binarySearch2 bs = new binarySearch2();
		int[] ls2 = new int[9];
		ls2[0] = 1;
		ls2[1] = 2;
		ls2[2] = 3;
		ls2[3] = 5;
		ls2[4] = 8;
		ls2[5] = 13;
		ls2[6] = 21;
		ls2[7] = 34;
		ls2[8] = 55;

		bs.binary_search(13, ls2);
	}
}
