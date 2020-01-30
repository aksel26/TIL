package com.javalec.ex;

import java.util.StringTokenizer;

public class MainClass {

	public static void main(String[] args) {
		
		String str1 = "오늘 날씨는 춥고, 눈이 많이 오고 있습니다."; //띄어쓰기
		String str2 = "2014/12/25"; //  슬래쉬 존재
		
		System.out.println(str1);
		System.out.println(str2);
		
		StringTokenizer tokenizer1 = new StringTokenizer(str1); //그냥 넣으면 띄어쓰기 기준으로 문자열 분할
		StringTokenizer tokenizer2 = new StringTokenizer(str2, "/");
		
		System.out.println("tokenizer1 문자열 수 : " + tokenizer1.countTokens());
		System.out.println("tokenizer2 문자열 수 : " + tokenizer2.countTokens());
		
		while (tokenizer1.hasMoreTokens()) {
			System.out.println(tokenizer1.nextToken());
		}
		
		while (tokenizer2.hasMoreTokens()) {
			System.out.println(tokenizer2.nextToken());
		}
		
	}
	
}
