package Map;

import java.util.TreeSet;

public class TreeSetEx2 {

	public static void main(String[] args) {
		TreeSet set = new TreeSet();
		int[] score = {12,53,67,45,22,76,87,45,78};
		for(int i = 0 ;i< score.length ; i++) {
			set.add(new Integer(score[i]));
		}
		
		System.out.println("50보다 작은 값 : " + set.headSet(new Integer(50)));
		System.out.println("50보다 큰 값 : "+ set.tailSet(new Integer(50)));
			
	}

}


//	출력

//	50보다 작은 값 : [12, 22, 45]
//	50보다 큰 값 : [53, 67, 76, 78, 87]