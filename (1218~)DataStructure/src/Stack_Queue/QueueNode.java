package Stack_Queue;

import java.util.Queue;

public class QueueNode {

	char item;
	QueueNode next;

	public QueueNode() {
		this.next = null;
	}

	public QueueNode(char item) {
		this.item = item;
		next = null;
	}

	public char getItem() {
		return this.item;
	}




	

	public static void main(String[] args) {
		char deletedItem ;
		LinkedQueue queue= new LinkedQueue();
		
		queue.enQueue('A');
		queue.print();
		
		queue.enQueue('B');
		queue.print();
		
		deletedItem = queue.deQueue();
		if(deletedItem != 0) {
			System.out.println("deleted Item : " + deletedItem);
		}
		
		queue.print();
		
		queue.enQueue('C');
		queue.print();
		
		deletedItem = queue.deQueue();
		if(deletedItem != 0 ) {
			System.out.println("deleted Item : " + deletedItem);
		}
		queue.print();
		
		deletedItem = queue.deQueue();
		if(deletedItem != 0 ) {
			System.out.println("deleted Item : " + deletedItem);
		}
		queue.print();
		
		deletedItem = queue.deQueue();
		if(deletedItem != 0 ) {
			System.out.println("deleted Item : " + deletedItem);
		}
		queue.print();

		
			
			
		
		
	}

}
