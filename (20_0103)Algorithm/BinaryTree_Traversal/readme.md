# 이진트리 구현과 순회(Traversal) 방식

### 사전지식

**비선형 자료구조** : **이진트리**(가 가장 많이 사용됨), 그래프, ...

선형 자료구조 : 배열 스택 큐

</br> 

***힙정렬 과 비교*** 

: *완전 이진트리로 구성 -> 포인터 사용 불필요 ( 0부터 노드 갯수 만큼 데이터를 넣어주기만 하면 됐다. )*

</br> 

---

### 이론

**이진트리**

1. 보다 불규칙한 이진트리로, **포인터**가 사용된다. 

   --> 특정 Root에서 자식노드에 접근 가능

2. 포인터가 사용되지 않고 배열로 표현하게 된다면, 불필요한 배열 공간을 만들어 **메모리 낭비**가 있을 수 있다.
3. **순회 종류**
   1. 전위순회 : 자신 -> 왼 -> 오
   2. 중위순회 : 왼 -> 자신 -> 오 
   3. 후위손회 : 왼 -> 오 -> 자신 (계산기 프로그램에서 주로 사용된다.)

---

### 코드

```c++
#include <iostream>

using namespace std;
// 노드 갯수
int number = 15;

// 구조체
// 하나의 노드 정보를 선언합니다.
typedef struct node *treePointer;
typedef struct node
{
    int data;
    treePointer leftChild, rightChild;

} node;

//전위 순회를 구현합니다.
void preOrder(treePointer ptr)
{
    if (ptr)
    {
        cout << ptr->data << ' ';
        preOrder(ptr->leftChild);
        preOrder(ptr->rightChild);
    }
}
// 중위 순회를 구현합니다.
void inOrder(treePointer ptr)
{
    if (ptr)
    {
        inOrder(ptr->leftChild);
        cout << ptr->data << ' ';
        inOrder(ptr->rightChild);
    }
}
// 후위 순회를 구현합니다.
void postOrder(treePointer ptr)
{
    if (ptr)
    {
        postOrder(ptr->leftChild);
        postOrder(ptr->rightChild);
        cout << ptr->data << ' ';
    }
}

int main()
{
	// 노드형 배열
    node nodes[number + 1];
  
  // 노드 안의 수 초기화(숫자 넣기)
    for (int i = 0; i <= number; i++)
    {
        nodes[i].data = i;
        nodes[i].leftChild = NULL;
        nodes[i].rightChild = NULL;
    }

  // 연결하기
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            nodes[i / 2].leftChild = &nodes[i];
        }
        else
        {
            nodes[i / 2].rightChild = &nodes[i];
        }
    }

    // preOrder(&nodes[1]);
  	// 1 2 4 8 9 5 10 11 3 6 12 13 7 14 15 
    
  	// postOrder(&nodes[1]);
  	// 8 9 4 10 11 5 2 12 13 6 14 15 7 3 1 
    
  	// inOrder(&nodes[1]);
  	// 8 4 9 2 10 5 11 1 12 6 13 3 14 7 15 
    return 0;
}
```

