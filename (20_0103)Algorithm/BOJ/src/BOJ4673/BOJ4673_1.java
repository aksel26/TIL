package BOJ4673;

public class BOJ4673_1 {
	public static int calculate(int value) {

		int result = value;

		while (value > 0) {
			
			result += value % 10;
			value /=10;
			
//			result = value + value / 10 + value % 10;

		}

		return result;

	}

	public static void main(String[] args) {
		int array[] = new int[10001];

		for (int i = 1; i <= array.length; i++) {
			int result = calculate(i);

			if (result <= 10000) {
				array[result] = 1;
			}

		}
		
		for (int i = 1; i < array.length; i++) {
			if (array[i] != 1) {
				System.out.println(i);
			}
		}

	}

}
