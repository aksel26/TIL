## Queue

### Queue?

- FIFO 구조
  1. 선형 큐 ( Array 이용 )
  2. 원형 큐 ( Array 이용 )
  3. 연결 큐 ( List 이용 )

### Queue의 종류

> Queue의 크기 = 배열의 크기

초기 : 저장된 원소가 없음 (front = rear = -1)

공백 :  front = rear = -1

포화 : rear = n - 1

### 선형 Queue의 구현

1. 초기 `createQueue()` 

   : front, rear = -1 로 초기화

   

2. `enQueue(item)`
   : rear값을 하나 증가시켜 새로운 원소를 삽입할 자리를 마련한다.

3. `deQueue`
   :	가장 앞에 잇는 원소를 삭제하기 위해 front값을 하나 증가시켜 남아있는 Queue의 첫째 원소로 이동함.
    	새로운 첫 원소를 리턴함으로써 삭제와 동일한 기능을 한다.

4. `isEmpty()`, `isFull()` 공백 및 포화상태 검사
   : 	공백상태 : `front = rear`
   	  포화상태 : rear = n - 1
5. `Qpeak()`
   ;	가장 앞에 있는 원소를 검색해 반환하는 연산
   	현재 front의 한자리 뒤(front + 1) 에 있는 원소를 반환 



#### 선형 Queue의 문제점

1. 삽입, 삭제를 계속하면 앞부분에 활용할 수 있는 공간이 있음에도 `rear =.n - 1` 인 상태<u>(포화상태)</u>로 인식한다.
2. 더 이상의 삽입을 수행하지 않는다.

##### 이를 방지하기 위해,

1. 매 연산시 마다 저장 원소들을 배열의 앞부분으로 모두 이동 ( 단점 : 이동 시간 소요되어 Queue의 효율성 저하 )
2. 원형 큐 사용 (배열의 처음과 끝이 연결되어 있는 구조)





### 원형 Queue

- 특징

  1. 초기 공백상태 ( `fornt = rear = 0` )

  2. Index의 순환 :  `mod사용`

  3. `front`  변수 : 공박과 포화를 구분하기 위해 `front`가 있는 자리는 사용하지 않고 항상 빈자리로 둔다.

  4. 삽입 위치 및 삭제 위치

     <img src="Readme.assets/image-20200517204958365.png" alt="image-20200517204958365" width="60%" />

#### 원형 Queue 구현

1. 초기  `createQueue()` 

   : 선형 큐오 마찬가지로 1차원 배열 생성

   ​	`front = rear = 0`

2. `isEmpty(), isFull()`

   : 공백상태 `front = rear`

   ​	포화상태 : `삽입할 rear 값의 다음 위치 = 현재 front`
   ​	`(rear + 1) mod n = front`

3. `enQueue(item)`

4. `deQueue`

   : front 값을 조정해 삭제할 자리를 준비
    새로운 `front` 원소를 리턴함으로써 삭제와 동일한 기능



### 연결 Queue

- 단순 연결 리스트(Linked List)를 이용한 Queue

  - Queue의 원소 : 단순 연결 리스트의 <u>노드</u>
  - Queue의 원소 순서 : 노드의 연결 순서, <u>링크</u>로 연결되어 있음.
  - Front : 첫번째 노드를 가리키는 링크
  - Rear  : 마지막 노드를 가리키는 링크

- 상태 표현

  - 초기상태 : `front = rear = NULL`

  - 공백상태 : `front = rear = NULL`

  - 계속해서 노드를 추가 할 수 있는 연결리스트의 특징 때문에 **포화상태가 없다.**

    <img src="Readme.assets/image-20200517210119211.png" alt="image-20200517210119211" width="70%" />



#### 연결 Queue 연산 과정

1. 공백 큐 생성 `createLinkedQueue()`

   : `front = Null, rear = Null;`

2. 원소 삽입

   <img src="Readme.assets/image-20200517210409859.png" alt="image-20200517210409859" width="70%" />

3. 원소 삭제

   <img src="Readme.assets/image-20200517210517586.png" alt="image-20200517210517586" width="70%" />

   <img src="Readme.assets/image-20200517210605869.png" alt="image-20200517210605869" width="70%"/>





## Array

### Exhaustive Searh ( Brute-Force  || Generate - And - Test 기법 ) 

>  모든 경우의 수를 나열하고 확인

- 경우의 수가 상대적으로 작을 때 유리
- 수행속도 느리지만 해결 찾을 확률이 높다
- 이를 활용해 해답 도출 후, 성능 개선을 위한 다른 알고리즘을 확인하는 것이 바람직하다.



#### 순열? (nPr)

> 서로 다른 것들 중 몇 개를 뽑아 한줄로 나열하는 것

- `nPr` = `n * (n-1) *(n-2) * ... * (n-r+1)`
- `nPn` = `n!`



### Greedy Algorithm

> 최적해를 구하는 데 사용되는 근시안적인 방법

- 여러 경우중 하나를 결정해야 할 때마다 그 순간에 최적이라고 생각되는 것을 선택해 나가는 방식

- 이러한 최적값들을 계속 수집해 최종적인 해답을 만들어도 궁극적인 최적이라는 보장은 없음

- 머리속에 떠오르는 생각을 검증 없이 바로 구현하면 Greedy 접근이 됨

  <img src="Readme.assets/image-20200518171916595.png" alt="image-20200518171916595" width="70%"/>







### Sort

- 종류

  <img src="Readme.assets/image-20200518172641664.png" alt="image-20200518172641664" width="80%" />

#### Bubble Sort

- 시간복잡도 : O(n^2)

#### Counting Sort

- <img src="Readme.assets/image-20200518173038136.png" alt="image-20200518173038136" width="80%" />
- 