package Stack_Queue;

import java.util.Collection;
import java.util.Iterator;
import java.util.Queue;

public class LinkedQueue implements Queue {
	private QueueNode front;
	private QueueNode rear;

	public LinkedQueue() {
		front = null;
		rear = null;
	}

	@Override
	public boolean isEmpty() {
		return (front == null);
	}

	public void enQueue(char item) {
		QueueNode node = new QueueNode(item);

		if (isEmpty()) {
			front = node;
			rear = node;
		} else {
			rear.next = node;
			rear = node;
		}
	}

	public char deQueue() {
		if (isEmpty()) {
			System.out.println("큐의 내용이 존재하지 않습니다");
			return 0;
		} else {
			char item = front.item;
			front = front.next;
			if (front == null) {
				rear = null;
			}

			return item;
		}

	}

	public void delete() {
		if (isEmpty()) {
			System.out.println("큐의 내용이 존재하지 않습니다");
		} else {
			front = front.next;
			if (front == null) {

				rear = null;
			}

		}

	}

	public Object peek() {
		if (isEmpty()) {
			System.out.println("큐의 내용이 존재하지 않습니다");
			return 0;
		} else {
			return front.item;
		}
	}

	public void print() {
		if (isEmpty()) {
			System.out.println("큐의 내용이 없습니다");
		} else {
			QueueNode node = front;
			while (node != null) {
				System.out.println(node.item + " ");
				node = node.next;
			}
			System.out.println();

		}
	}

	@Override
	public int size() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public boolean contains(Object o) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public Iterator iterator() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public Object[] toArray() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public Object[] toArray(Object[] a) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public boolean remove(Object o) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean containsAll(Collection c) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean addAll(Collection c) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean removeAll(Collection c) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean retainAll(Collection c) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public void clear() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public boolean add(Object e) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean offer(Object e) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public Object remove() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public Object poll() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public Object element() {
		// TODO Auto-generated method stub
		return null;
	}
}
