package Stack_Queue;




public class IntStack {
	
	private int max; 
	private int ptr;
	private int[] stk;
	
//	?€?? ??Έ : ?€??΄ λΉμ΄??.
	public class EmptyIntStackException extends RuntimeException{
		public EmptyIntStackException(){}
	}
	
//	?€?? ??Έ : κ°?? μ°Όμ ?
	public class  OverflowIntStackException extends RuntimeException{
		public OverflowIntStackException() {
			
		}
	}
	//??±
	public IntStack(int capacity) {
		ptr = 0;
		max = capacity;
		try {
			stk  = new int[max];	//?€? λ³Έμ²΄?΄ λ°°μ΄ ??±
			
		}catch(OutOfMemoryError e) { // ??±?  ? ??
			max = 0;
		}
	}

	
	
//	?€?? xλ₯? ?Έ?
	public int push(int x ) throws OverflowIntStackException{
		if (ptr>=max) {
			throw new OverflowIntStackException();
			
		}
		return stk[ptr++]=x;
	}
	
	
//	?€??? ?°?΄?°λ₯? ?
	public int pop () throws EmptyIntStackException{
		if (ptr<0) {
			throw new EmptyIntStackException();
		}
		return stk[--ptr];
	}
	

//	?€??? ?°?΄?Έλ₯? ?Ό?¬ 
	public int peek()	throws EmptyIntStackException{
		if(ptr<=0) {
			throw new EmptyIntStackException();
			
		}
		return stk[ptr-1];
	}
	
	
//	?€??? xλ₯? μ°Ύμ ?Έ?±?€(??Όλ©? -1)λ₯? λ°ν
	public int indexOf(int x ) {
		for (int i =ptr-1; i>=0 ;i--) {
			if(stk[i]==x){
				return i ;
			}
			
		}
		return -1;
	}
	
	
	// ?€?? λΉμ?
	public void clear() {
		ptr=0;
		
	}
	
//	 ?€?? ?©?? λ°ν
	public int capacity() {
		return max;
	}
	
//	?€?? ??¬ ?? ?°?΄?°? ?λ₯? λ°ν
	public int size() {
		return ptr;
	}
	
//	?€??΄ λΉμ΄ ??κ°??
	public boolean isEmpty() {
		return ptr<=0;
	}
	
	
//	?€??΄ κ°?? μ°¨μ?κ°??
	public boolean isFull() {
		return ptr>=max;
	}
	
	
//	?€? ?? λͺ¨λ  ?°?΄?°λ₯? λ°λ₯ -> κΌ???κΈ? ????λ‘? μΆλ ₯
	public void dump() {
		if(ptr<=0)
			System.out.println("?€??΄ λΉμ΄??€.");
		else {
			for(int i=0;i<ptr;i++) {
				System.out.print(stk[i]+" ");
				
			}
			System.out.println();;
		}
	}

}




