package sort;

public class QuickSort_v2 {
	static void swap(int[] a, int idx1,  int idx2) {
		
		int t = a[idx1];
		a[idx1]=a[idx2];
		a[idx2]=t;
		
	}
	public void quicksort(int[]a, int left, int right) {
		IntStack lstack = new IntStack(right-left+1); // 나눌 범위의 왼쪽 끝 요소의 인덱스를 저장하는 스택
		IntStack rstack = new IntStack(right-left+1); // 나눌 범위의 오른쪽 끝 요소의인덱스를 저장하는스택
		
		lstack.push(left);
		rstack.push(right);
		
		while(lstack.isEmpty()!=true) {
			int pl = left = lstack.pop();
			int pr = right = rstack.pop();
			int x = a[(left+right)/2];
			
			do {
				while(a[pl]<x) pl++;
				while(a[pl]>x) pr--;
				if(pl<=pr) {
					swap(a,pl++,pl--);
				}
				
			}while(pl<=pr);
			
			if(left<pr) {
				lstack.push(left);
				rstack.push(right);
				
			}
			if(pl<right) {
				lstack.push(pl);
				rstack.push(right);
				
				
			}
		}
		
	}
	
	public static void main(String[] args) {

		
	}

}
