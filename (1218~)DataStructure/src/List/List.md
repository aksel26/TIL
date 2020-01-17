## List

### 포인터로 연결리스트 만들기

```java
class Node<E>{
  E data; //데이터
  Node<E> next; //다음 노드를 가리키는 포인터
}
```

- data는 데이터 그 자체가 아닌 단순 참조용!