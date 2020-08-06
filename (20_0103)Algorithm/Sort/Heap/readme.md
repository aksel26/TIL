# Heap Sort

- **힙 트리 구조를 이용**하는 정렬 방법
- **추가적인 배열이 필요하지 않아** 메모리 측면에서 효율적이다.
- 항상 **`O(logN * N)`** 을 보장

</br> 

## 이진트리

: 데이터를 각 노드에 담은 뒤 노드를 두개씩 이어 붙이는 구조이며,</br> 
  자식이 2가지인 경우 (최대.2가지)

</br> 

## 힙(heap)

: 최솟값 or 최댓값을 빠르게 찾아내기 위해 완전 이진트리를 기반으로 하는 트리

- 최대 힙

  : 부모 노드가 자식 노드보다 큰 힙

- 최소 힙

</br> 

정렬을 위해서는 정해진 데이터를 **힙 구조를 가지도록 만들어야 한다.**

힙 정렬 수행을 위해서는 **힙 생성 알고리즘**을 사용한다.

</br> 

## 힙 생성 알고리즘 

- 특정한 노드의 두 자식중에서 더 큰 자식과 자신의 위치를 바꾸는 알고리즘
- 특정한 하나의 노드에 대해서 수행하는 것.
- 하나의 노드를 제외하고는 최대 힙이 구성되어 있는 상태라고 가정한다.
- **Parent Node 의 인덱스 넘버 : ` i / 2`** 
- **Right Node 의 인덱스 넘버 : ` 2i + 1`**
- **Left Node 의 인덱스 넘버 : ` 2i`**

</br> 

## 시간복잡도

**`O(logN), O(N)`** 

(n / 2. * lögN ~= N)



</br> 

## 소스코드

```c++
#include <iostream>

using namespace std;

int number = 9;
int heap[9] = {7, 6, 5, 8, 3, 5, 9, 1, 6};
int main()
{
    // 먼저 전체 트리 구조를 최대 힙 구조로 바꾼다.
    for (int i = 1; i < number; i++)
    {
        int c = i;
        do
        {
          	// 특정 원소의 부모
            int root = (c - 1) / 2;
            if (heap[root] < heap[c])
            {
                int temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            c = root;

        } while (c != 0);
    }

    //크기를 줄여가면서 반복적으로 힙을 구성한다.
    for (int i = number - 1; i >= 0; i--)
    {
      // 가장 큰 값을 맨뒤로
        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
      
     
        int root = 0;
        int c = 1;
        do
        {
            c = 2 * root + 1;
            // 자식중에 더 큰 값 찾기
            if (heap[c] < heap[c + 1] && c < i - 1)
            {
                c++;
            }

            // 루트보다 자식이 더 크다면 교환
            if (heap[root] < heap[c] && c < i)
            {
                int temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }

            root = c;
        } while (c < i);
    }

    for (int i = 0; i < number; i++)
    {
        cout << heap[i] << " ";
    }

    return 0;
}
```

