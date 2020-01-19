## List

### 포인터로 연결리스트 만들기

```java
class Node<E>{
  E data; //데이터
  Node<E> next; //다음 노드를 가리키는 포인터
}
```

- data는 데이터 그 자체가 아닌 단순 참조용!



- 생성자 LinkedList<E> 

  머리 노드를 가리키는 변수 head에 null을 대입 - > 비어있는 연결 리스트 생성

  ```java
  // 생성자
  public LinkedList(){
    head =crnt = null;
  }
  
  
  // 연결 리스트가 비었는지 확인
  	// head == null;
  ```
  - 노드가 1개인 연결 리스트를 판단하는 방법

    Node<E>형 변수 head가 가리키는 곳은 머리노드 A

    ​	A는 꼬리노드이기도 하고, 뒤쪽 포인터 값은 null.

    ```java
    head.next == null	//노드가 1개인지 확인
    ```

  - 노드가 1개인 연결 리스트를 판단하는 방법

    ```java
    head.next.next == null // 노드가 2개인지 확인
    ```

  - 꼬리노드인지 판단하는 방법

    ```java
    p.next ==null
    ```

    

- 검색 수행 search 메서드

  - 선형검색, 머리노드부터 스캔한다.

  - 종료 조건

    1. 모두 못 찾고 꼬리노드를 지나가기 직전인 경우
    2. 검색조건을 만족하는 노드를 찾은 경우

    메서드의 매개변수

    : obj = 검색할 때 key가 되는 데이터를 넣어둔 object
    	c = comparator. 비교 결과가 0이면 검색 조건이 성립하는 것

- 머리에 노드를 삽입하는 addFirst 메서드

  ```java
  public void addFirst(E obj){
    Node<E> ptr = head;	//삽입 전의 머리 노드
    head =crnt =new Node<E> (obj, ptr); //obj는 Node Data, ptr 은 삽입전의 머리노드 A
  }
  ```

- 꼬리에 노드를 삽입하는 addLast 메서드

  ```java
  	public void addLast(E obj) {
  			if( head ==null) {	//리스트가 비어있으면 
  				addFirst(obj);	//머리에 삽입
  				
  			}else {
  				Node<E> ptr = head;
  				while(ptr.next!=null){	//꼬리노드를 찾는다.
  					ptr = ptr.next;	//while 문 종료시 PTR은 꼬리노드를 가리킨다.
  				}
  				ptr.next = crnt = new Node<E>(obj,null);	//null을 대입해 꼬리노드가 어떤 노드도 가리키지 않게함.
  			}	
  		}
  ```

- 머리노드를 삭제하는 removeFirst메서드

  - 리스트가 비어있지 않은 경우에만 삭제 ( head != null )

  ```java
  public void removeFirst(){
    if(head!=null){
      head =crnt = head.next;
    }
  }
  ```

- 꼬리노드를 삭제하는 removeLast메서드

  - 리스트에 노드가 1개만 있는 경우

    : 머리노드 삭제 작업과 동일

  - 리스트에 노드가 2개이상 있는 경우

    ```java
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
    ```

- 선택한 노드를 삭제하는 remove메서드

  - p가 머리노드인 경우

    : removeFirst메서드를 활용

  - p가 머리노드가 아닌 경우

    ```java
    //노드 p를 삭제
    
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
    
    
    //선택 노드 삭제
    public void removeCurrentNode(){
      remove(crnt);
    }
    
    
    // 모든 노드를 삭제
    public void clear() {	
    		while(head!= null) {	// 노드에 아무것도 없을 때 까지 삭
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
    
    ```

    