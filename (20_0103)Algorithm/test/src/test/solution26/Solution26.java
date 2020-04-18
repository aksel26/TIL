package test.solution26;

import java.util.*;

public class Solution26 {
	public String solution(String[] participant, String[] completion) {
		String answer = "";

		Map<String, Integer> map = new HashMap<>();

//		처음에는 leo, kiki, eden 이 다 map에 없으므로 0 + 1 = 1이 된다.
		for (String arg : participant)
			map.put(arg, map.getOrDefault(arg, 0) + 1);

//		두번째에서 kiki, eden에마 -1이 된다.
		for (String arg : completion)
			map.put(arg, map.get(arg) - 1);

		for (String key : map.keySet()) {

//		leo만 -1이 안되었으므로 key값이 1인 leo만 반환된다.
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
