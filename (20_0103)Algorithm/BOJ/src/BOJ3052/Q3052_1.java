package BOJ3052;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;

public class Q3052_1 {

	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		HashSet<Integer> h = new HashSet<Integer>();
		
		
		for (int i = 0; i < 10; i++) {
			h.add(Integer.parseInt(br.readLine()) % 42);
			
		}
		
		
		System.out.println(h.size());
	}

}
