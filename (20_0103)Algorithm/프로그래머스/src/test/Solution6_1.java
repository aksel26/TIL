package test;

import java.util.*;
import java.util.stream.Collectors;

public class Solution6_1 {
	
	public static void main(String[] args) {
		
		
//	ArrayList 개념 복습!
		
		ArrayList<Integer> al = new ArrayList<Integer>();
		
		
//		al에 요소 넣기
		al.add(1);
		al.add(2);
		al.add(3); 
				
		
		ArrayList<Integer> al2 = new ArrayList<Integer>();
		al2.add(4);
		al2.add(5);
		al2.add(6);
		
//		addAll메서드
		al.addAll(al2);
		for(int i : al) {
			System.out.println(i);
		}
		
		
		
	}
}