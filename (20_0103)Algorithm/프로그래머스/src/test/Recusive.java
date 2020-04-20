


package test;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Recusive {

	static final int dx[]= {-1,-1,-1,1,1,1,0,0};
	static final int dy[]= {-1,0,1,-1,0,1,-1,1};
	static char[][] map = new char[5][5];


	static boolean hasWord(int y, int x, String word) {
		
		// 기저사례
		
		if(!(y>=0 && y< 5 && x>5 && x>=0 && x<5)) return false;
		
		if(map[y][x] != word.charAt(0)) return false;
		if(word.length()==1) return true;
		
		
		for(int direction = 0 ; direction<8; direction++) {
			int nextY= y+ dy[direction];
			int nextX = x + dx[direction];
			if(hasWord(nextY, nextX, word.substring(1))) return true;
		}
		
		return false;
	}
	
	
	
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int tc = Integer.parseInt(br.readLine());
		while(tc-- >0) {
			for(int i = 0; i<5 ; i++) {
				String str = br.readLine();
				map[i] = str.toCharArray();
			}
			
			int nWord = Integer.parseInt(br.readLine());
			while(nWord-- > 0) {
				String word = br.readLine();
				String result= "NO";
				for(int y = 0 ;y<5; y++) {
					for(int x =0 ; x<5 ;x++) {
						if(hasWord(y,x,word) && result.equals("NO"))
							result ="YES";
						
					}
				}
				bw.write(word + " " + result);
				bw.newLine();
				bw.flush();
			}
			bw.close();
		}
		
	}

}
