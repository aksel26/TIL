package test;

public class Recusive {

	int dx[]= {-1,-1,-1,1,1,1,0,0};
	int dy[]= {-1,0,1,-1,0,1,-1,1};
	boolean[][] board;


	boolean hasWord(int y, int x, String word) {
		
		// 기저사례
		if(!hasWord(y, x, word)) return false;
//		if(board[y][x] != word.charAt(0)) return false;
		if(word.length()==1) return true;
		
		
		for(int direction = 0 ; direction<8; direction++) {
			int nextY= y+ dy[direction];
			int nextX = x + dx[direction];
			if(hasWord(nextY, nextX, word.substring(1))) return true;
		}
		
		return false;
	}
	
	
	
	public static void main(String[] args) {
		Recusive re = new Recusive();
		re.hasWord(2, 1, "s");

	}

}
