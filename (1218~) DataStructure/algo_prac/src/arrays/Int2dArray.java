package arrays;


//다차원 배열 Java에서는 다차원 배열이 아니고 배월의 배열(2차원) 배열의 배열의 배열 (3차원)
public class Int2dArray {

	public static void main(String[] args) {
		int[][]x= new int[2][4]; // 2행 4열의 배열
		x[0][1] = 22;
		x[0][2] = 23;
		x[1][2]	= 59;
		
		for (int i = 0; i<2; i++) {
			for(int j = 0; j<4; j++){
				System.out.println("x["+i+"]"+"["+j+"]=" +x[i][j]);
			}
			
		}
		
		
		//3차원 배열의 선언
		long y[][][]= new long [3][3][3];
		
		
	}
}





