package List;

import java.util.Comparator;

public class LinkedList<E> {

	// 노드
	class Node<E> {
		private E data;
		private Node<E> next;

		// 생성자
		public Node(E data, Node<E> next) {
			super();
			this.data = data;
			this.next = next;
		}

	}

	public LinkedList() {
		head = crnt = null;
	}

	private Node<E> head; // 머리 노드
	private Node<E> crnt; // 선택 노드

	public void addFirst(E obj) {
		Node<E> ptr = head; // 삽입 전의 머리 노드
		head = crnt = new Node<E>(obj, ptr);
	}
	
	public E search(E obj, Comparator<? super E> c) {
		Node<E> ptr = head;	//현재 스캔중인 노드
		
		while(ptr!= null) {
			if(c.compare(obj, ptr.data)==0) { //검색 성공
				crnt = ptr;
				return ptr.data;
			}
			ptr = ptr.next;	//다음 노드 선택
		}
		return null; //검색 실패
	}

	public void addLast(E obj) {
		if (head == null) { // 리스트가 비어있으면 머리에 삽입
			addFirst(obj);

		} else {
			Node<E> ptr = head;
			while (ptr.next != null) {
				ptr = ptr.next;
			}
			ptr.next = crnt = new Node<E>(obj, null);

		}

	}
	
	public void removeFirst(){
		  if(head!=null){
		    head =crnt = head.next;
		  }
		}
	
	public void removeLast() {
		if(head!= null) {
			if(head.next!=null)
				removeFirst();
		}else {
			Node<E> ptr = head;	// 스캔중인 노드
			Node<E> pre = head;	// 스캔중인 노드의 앞쪽 노드
			
			
			while(ptr.next!= null) {
				pre = ptr ;
				ptr = ptr.next;
			}
			pre.next= null;	//pre는 삭제 후의 꼬리노드
			crnt = pre;
					
			
		}
	}
	
	public void remove(Node p) {
		if(head!=null) {
			if(p == head) {
				removeFirst();	
			}
			
		}else {
			Node<E> ptr = head;
			
			while(ptr.next!= p) {
				ptr = ptr.next;
				if(ptr == null) {
					return;
				}
			}
			
			ptr.next = p.next;
			crnt = ptr;
		}
	}
	public void removeCurrentNode(){
		  remove(crnt);
		}

	
	public void clear() {	// 모든 노드를 삭제
		while(head!= null) {	// 노드에 아무것도 없을 때 까지 삭제
			removeFirst();
		}
		crnt = null;
				
	}
	
	
	//선택 노드를 하나씩 뒤로 이동
	public boolean next() {
		if(crnt == null || crnt.next == null) {
			return false;
		}
		crnt = crnt.next;
		return true;
	}
	
	//선택 노드를 출력
	public void printCurrentNode() {
		if(crnt == null) {
			System.out.println("선택 노드가 없습니다");
			
		}else {
			System.out.println("선택 노드는 : " + crnt.data);
			
		}
	}
	
	
	//모든 노드를 출력	
	public void dump() {
		Node<E> ptr = head;
		
		while(ptr != null) {
			System.out.println(ptr.data);
			ptr = ptr.next;
					
		}
	}


	public static void main(String[] args) {
		
	}

}
