package Stack_Queue;

import java.util.EmptyStackException;
import java.util.Vector;

public class MyStack extends Vector{
	
	private Object push(Object o) {
		addElement(o);
		return o;
	}
	
	private Object pop() {
		Object obj = peek();
		removeElementAt(size()-1);
		return obj;
	}
	
	private Object peek() {
		int len = size();
		if(len ==0) {
			throw new EmptyStackException();
			
		}
		return elementAt(len -1);
	}
	
	private boolean empty() {
		return size() == 0;
	}
	
	private int search(Object o) {
		int i = lastIndexOf(o);
		if(i>=0) {
			return size()-1;
		}
		return -1;
	}
	
	public static void main(String[] args) {
		
	}

}
