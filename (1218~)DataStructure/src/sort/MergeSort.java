package sort;

import java.util.Scanner;

public class MergeSort {

	static int[] buff; // 작업용 배열

	// a[left] ~ a[right]를 재귀적으로 병합 정렬
	static void __mergeSort(int[] a, int left, int right) {
		if (left < right) {
			int i;
			int center = (left + right) / 2;
			int p = 0;
			int j = 0;
			int k = left;

			__mergeSort(a, left, center);// 배열의 앞부분을 병합 정렬
			__mergeSort(a, center + 1, right);// 배열의 뒷부분을 병 정렬

			for (i = left; i <= center; i++) {
				buff[p++] = a[i];

			}
			while (i <= right && j < p) {
				a[k++] = (buff[j] <= a[i]) ? buff[j++] : a[i++];
			}
			while (j < p) {
				a[k++] = buff[j++];

			}

		}

	}

//	병합정렬
	static void mergeSort(int[] a, int n) {
		buff = new int[n];

		__mergeSort(a, 0, n - 1); // 배열 전체를 병합정렬

		buff = null; // 작업용 배열을 해제
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("병합정렬");
		System.out.print("요솟수 : ");
		int num = scn.nextInt();

		int[] x = new int[num];

		for (int i = 0; i < num; i++) {
			System.out.print("x[" + i + "] :");
			x[i] = scn.nextInt();
		}

		mergeSort(x, num);

		System.out.println("오름차순으로 정렬하였습니다.");
		for (int i = 0; i < num; i++) {
			System.out.println("x[" + i + "] = " + x[i]);
		}

	}

}

//	출력

//	병합정렬
//	요솟수 : 6
//	x[0] :4
//	x[1] :5
//	x[2] :6
//	x[3] :3
//	x[4] :4
//	x[5] :3
//	오름차순으로 정렬하였습니다.
//	x[0] = 3
//	x[1] = 3
//	x[2] = 4
//	x[3] = 4
//	x[4] = 5
//	x[5] = 6
