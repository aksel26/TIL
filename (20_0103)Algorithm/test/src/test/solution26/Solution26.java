package test.solution26;

import java.util.*;

public class Solution26 {
	public String solution(String[] participant, String[] completion) {
		String answer = "";

		Map<String, Integer> map = new HashMap<>();


		for (String arg : participant)
			map.put(arg, map.getOrDefault(arg, 0) + 1);
			System.out.println(map.get(2));
		for (String arg : completion)
			map.put(arg, map.get(arg) - 1);
			
		for (String key : map.keySet()) {
			
			if (map.get(key) != 0)
				return key;

		}
		
		return null;
	}

	public static void main(String[] args) {
		Solution26 sol26 = new Solution26();

		String participant[] = { "leo", "kiki", "eden" };
		String completion[] = { "kiki", "eden" };

		System.out.println(sol26.solution(participant, completion));
	}
}
