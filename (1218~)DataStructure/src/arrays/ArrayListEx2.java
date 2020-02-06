package arrays;

import java.util.ArrayList;
import java.util.List;

public class ArrayListEx2 {

	public static void main(String[] args) {
		final int MAX = 10;	//자르고자 하는 글자의 갯수 지정
		String source = "0123456789abcdefghijklmnopqrstuwxyz#@$%";
		int length = source.length();
		
		
		List list = new ArrayList((length/MAX) + 10);	// 크기를 여유있게 잡는다. 부족할 경우 자동으로 늘어나지만 시간이 많이 소요되기 때문.
		
		for(int i = 0 ; i< length ; i+=MAX) {
			
			System.out.println(i);	// 0 10 20 30 으로 증가
			
			if(i+MAX<length) {
				list.add(source.substring(i, i+MAX));
			}else {
				list.add(source.substring(i));
			}
		}
		
		for(int i= 0; i<list.size(); i++) {
			System.out.println(list.get(i));
		}
	}

}

//		출력

//		0123456789
//		abcdefghij
//		klmnopqrst
//		uwxyz#@$%
