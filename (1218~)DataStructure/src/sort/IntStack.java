package sort;




public class IntStack {
	
	private int max; 
	private int ptr;
	private int[] stk;
	
//	?‹¤?–‰?‹œ ?˜ˆ?™¸ : ?Š¤?ƒ?´ ë¹„ì–´?ˆ?Œ.
	public class EmptyIntStackException extends RuntimeException{
		public EmptyIntStackException(){}
	}
	
//	?‹¤?–‰?‹œ ?˜ˆ?™¸ : ê°??“ ì°¼ì„ ?•Œ
	public class  OverflowIntStackException extends RuntimeException{
		public OverflowIntStackException() {
			
		}
	}
	//?ƒ?„±
	public IntStack(int capacity) {
		ptr = 0;
		max = capacity;
		try {
			stk  = new int[max];	//?Š¤?ƒ ë³¸ì²´?—´ ë°°ì—´ ?ƒ?„±
			
		}catch(OutOfMemoryError e) { // ?ƒ?„±?•  ?ˆ˜ ?—†?Œ
			max = 0;
		}
	}

	
	
//	?Š¤?ƒ?— xë¥? ?‘¸?‹œ
	public int push(int x ) throws OverflowIntStackException{
		if (ptr>=max) {
			throw new OverflowIntStackException();
			
		}
		return stk[ptr++]=x;
	}
	
	
//	?Š¤?ƒ?—?„œ ?°?´?„°ë¥? ?Œ
	public int pop () throws EmptyIntStackException{
		if (ptr<0) {
			throw new EmptyIntStackException();
		}
		return stk[--ptr];
	}
	

//	?Š¤?ƒ?—?„œ ?°?´?Š¸ë¥? ?”¼?¬ 
	public int peek()	throws EmptyIntStackException{
		if(ptr<=0) {
			throw new EmptyIntStackException();
			
		}
		return stk[ptr-1];
	}
	
	
//	?Š¤?ƒ?—?„œ xë¥? ì°¾ì•„ ?¸?±?Š¤(?—†?œ¼ë©? -1)ë¥? ë°˜í™˜
	public int indexOf(int x ) {
		for (int i =ptr-1; i>=0 ;i--) {
			if(stk[i]==x){
				return i ;
			}
			
		}
		return -1;
	}
	
	
	// ?Š¤?ƒ?„ ë¹„ì?
	public void clear() {
		ptr=0;
		
	}
	
//	 ?Š¤?ƒ?˜ ?š©?Ÿ‰?„ ë°˜í™˜
	public int capacity() {
		return max;
	}
	
//	?Š¤?ƒ?— ?Œ“?—¬ ?ˆ?Š” ?°?´?„°?˜ ?ˆ˜ë¥? ë°˜í™˜
	public int size() {
		return ptr;
	}
	
//	?Š¤?ƒ?´ ë¹„ì–´ ?ˆ?Š”ê°??
	public boolean isEmpty() {
		return ptr<=0;
	}
	
	
//	?Š¤?ƒ?´ ê°??“ ì°¨ìˆ?Š”ê°??
	public boolean isFull() {
		return ptr>=max;
	}
	
	
//	?Š¤?ƒ ?•ˆ?˜ ëª¨ë“  ?°?´?„°ë¥? ë°”ë‹¥ -> ê¼???ê¸? ?ˆœ?„œ??ë¡? ì¶œë ¥
	public void dump() {
		if(ptr<=0)
			System.out.println("?Š¤?ƒ?´ ë¹„ì–´?ˆ?‹¤.");
		else {
			for(int i=0;i<ptr;i++) {
				System.out.print(stk[i]+" ");
				
			}
			System.out.println();;
		}
	}

}




