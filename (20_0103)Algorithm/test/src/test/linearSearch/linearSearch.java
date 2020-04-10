package test.linearSearch;

public class linearSearch {
	public int linear_search(int element, int[] some_list) {
		int answer = 0;
		
		for(int i = 0; i< some_list.length; i++) {
			if(element == some_list[i] ) {
				answer = i;
			
		
			}
		}
		System.out.println(answer);
		
	
		return answer;
	}
	public static void main(String[] args) {
		linearSearch ls = new linearSearch();
		int[] ls2 = new int[5];
		ls2[0]=0;
		ls2[1]=34;
		ls2[2]=4;
		ls2[3]=5;
		ls2[4]=2;
		ls.linear_search(4, ls2);
		
	}
}
