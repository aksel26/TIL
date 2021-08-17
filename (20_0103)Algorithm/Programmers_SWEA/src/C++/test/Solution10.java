package test;

import java.util.*;
import java.util.regex.Pattern;


//큰 것부터 작은 순으로 정렬해 새로운 문자열을 리턴, 
public class Solution10 {
	public String solution(String s) {
		String[] array = s.split("");
		Arrays.sort(array);
		Collections.reverse(Arrays.asList(array));
		return String.join("", array);
	}


	public static void main(String[] args) {
		Solution10 sol10 = new Solution10();
		System.out.println(sol10.solution("asdfasdfA"));
	}
}