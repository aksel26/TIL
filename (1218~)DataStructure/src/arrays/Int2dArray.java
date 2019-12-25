package arrays;


//������ �迭 Java������ ������ �迭�� �ƴϰ� ����� �迭(2����) �迭�� �迭�� �迭 (3����)
public class Int2dArray {

	public static void main(String[] args) {
		int[][]x= new int[2][4]; // 2�� 4���� �迭
		x[0][1] = 22;
		x[0][2] = 23;
		x[1][2]	= 59;
		
		for (int i = 0; i<2; i++) {
			for(int j = 0; j<4; j++){
				System.out.println("x["+i+"]"+"["+j+"]=" +x[i][j]);
			}
			
		}
		
		
		//3���� �迭�� ����
		long y[][][]= new long [3][3][3];
		
		
	}
}





