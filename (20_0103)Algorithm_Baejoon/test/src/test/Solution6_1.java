package test;

import java.util.*;
import java.util.stream.Collectors;

public class Solution6_1 {
	
	public static void main(String[] args) {
		
		
		ArrayList<Integer> al = new ArrayList<Integer>();
		ArrayList<Integer> al2 = new ArrayList<Integer>();
		al.add(1);
		al.add(2);
		al.add(3);
		al2.add(4);
		al2.add(5);
		al2.add(6);
		
		al.addAll(al2);
		for(int i : al) {
			System.out.println(i);
		}
		
		
		
	}
}