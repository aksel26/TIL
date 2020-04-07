package test;

import java.util.Enumeration;
import java.util.Vector;

public class VectorTest {

	public static void main(String[] args) {
		Vector<Integer > vector = new Vector<Integer>(10);
		  
		
		
//		Enumeration e = vector.elements();
		for (int i = 0; i < 10; i++) {
			vector.addElement(i*2);
			System.out.println(vector);
			System.out.println(vector.size());
	
			
		}
		System.out.println(vector.get(7));

	}

}
