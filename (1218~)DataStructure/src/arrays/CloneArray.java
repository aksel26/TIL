package arrays;

public class CloneArray {

	public static void main(String[] args) {

//		�迭�� ����
//		: �迭�̸�.clone

	int aa[]= {1,2,3,4,5};
	int bb[]=aa.clone();
	
	bb[3]=23;
	
	System.out.print("a = ");
	for(int i =0;i<aa.length;i++) {
		System.out.print(" "+aa[i]);
	}	
	
	System.out.print("\nb = ");
	for(int i=0; i<bb.length;i++) {
		System.out.print(" " +bb[i]);
		
	}

	}

}
