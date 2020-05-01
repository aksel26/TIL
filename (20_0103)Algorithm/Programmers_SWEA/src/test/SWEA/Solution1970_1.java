package test.SWEA;
import java.io.*;

public class Solution1970_1 {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());
		for(int tc=1; tc<=T; tc++) {
            
			int N = Integer.parseInt(br.readLine());
			
			int[] count = new int[8];
			int[] money = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
			for(int i=0; i<8; i++) {
                
				if(N >= money[i]) { //돈이 화폐단위보다 같거나 클때만 나눠준다.
					int cnt = N/money[i];
					count[i] = cnt;
					N -= cnt*money[i];
				}
			}
			
			System.out.println("#"+tc);
			for(int i=0; i<8; i++) {
				System.out.print(count[i]+" ");
			}
			System.out.println();
		}
	}

}