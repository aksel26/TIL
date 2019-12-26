package stack;

import stack.IntStack.EmptyIntStackException;

public class IntQueue {
	private int max;
	private int front;
	private int rear;
	private int num;
	private int[] que;

	public class EmptyQueueException extends RuntimeException {
		public EmptyQueueException() {

		}
	}

	public class OverflowIntQueueException extends RuntimeException {
		public OverflowIntQueueException() {

		}
	}

//	생성자
	public IntQueue(int capacity) {
		num = front = rear = 0;
		max = capacity;
		try {
			que = new int[max];

		} catch (OutOfMemoryError e) {
			max = 0;
		}
	}

//	인큐
	public int enque(int x) throws OverflowIntQueueException {
		if (num>=max)
			throw new OverflowIntQueueException(); // 큐가 가득참'
		que[rear++] = x;
		num ++;
		
		if(rear ==max)	 //큐의 끝자락이 되면 max와 num이 같아지는 경우가 발생한다. 이를 방지하기 위해 rear를 0으로 설정해준다.
			rear=0;
	return x;	
	}
	
//	디큐
	public int deque() throws EmptyIntStackException{
		if (num<=0)
			throw new EmptyQueueException();
		int x = que[front ++];
		num --;
		
		if(front ==max)
			front =0;
		
		return x;
	}
	
//	큐에서 데이터를 피크(프런트 데이터를 들여다봄)
	
	public int peek() throws EmptyQueueException{
		if (num <=0)
			throw new EmptyQueueException();
		return que[front];
	}
	
//	큐에서 x를 검색하여 인덱스(찾지못하면 -1)를 반환
	
	public int indexOf(int x) {
		for(int i = 0; i<num ;i++) {
			int idx=(i+front) % max;
			if(que[idx]==x)
				return idx;
		}
		return -1;
	}

//	큐를 비움
	public void clear() {
		num =front =rear=0;
		
	}
	
//	큐의 용량을 반환
	public int capacity() {
		return max;
	}
	
//	큐에 쌓여있는 데이터의 수를 반환
	public int size() {
		return num;
	}
	
//	큐가 비었나?
	public boolean isEmpty() {
		return num<=0;
	}
	
//	큐가 꽉 찼나?
	public boolean isFull() {
		return num>=max;
	}
	
//	큐안의 모든 데이터 출력
	
	public void dump() {
		if(num <=0) {
			System.out.println("큐가 비어있다.");
			
		}else {
			for(int i=0; i<num ; i++) {
				System.out.print(que[(i+front)%max] + " ");
			}
			System.out.println();
		}
	}

}