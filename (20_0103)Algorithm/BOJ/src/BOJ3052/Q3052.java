package BOJ3052;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Scanner;

public class Q3052 {

	public static void main(String[] args) throws IOException {

		boolean[] arr = new boolean[42];

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		for (int i = 0; i < 10; i++) {

			arr[Integer.parseInt(br.readLine()) % 42] = true;

		}

		int cnt = 0;
		for (boolean value : arr) {
			if (value) {
				cnt++;
			}
		}

		System.out.println(cnt);

	}

}
