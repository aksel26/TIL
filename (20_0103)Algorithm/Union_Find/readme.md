# Union-Find (합집합 찾기)

</br> 

<u>**여러개의 노드가 존재할 때, 두 개의 노드를 선택해  현재 이 두 노드가 서로 같은 그래프에 속하는지 판별하는 알고리즘.**</u>

</br> 

## 순서

- 연결 전 : 각각의 원소의 부모 노드 번호는 자기 자신의 번호이다.
- 연결 후 : 부모를 합칠때는 일반적으로 **더 작은 값 쪽으로 합친다.** (Union)
  - 두개의 노드가 연결되어 있을 경우 <u>부모가 다른 경우가 발생</u>한다.
    - 이를 해결하기 위해 **재귀함수**를 이용

</br> 

## 코드

```c++
#include <stdio.h>

int getparent(int parent[], int x)
{
    // 재귀함수의 종료 부분
    if (parent[x] == x)
        return x;

  // 재귀함수 호출
    return parent[x] = getparent(parent, parent[x]);
}


// 부모를 합치는 부분
int unionParent(int parent[], int a, int b)
{
    a = getparent(parent, a);
    b = getparent(parent, b);
    if (a < b)
        parent[b] = a;
    else
        parent[a] = b;
}

// 같은 부모를 가지는지 확인
int findparent(int parent[], int a, int b)
{
    a = getparent(parent, a);
    b = getparent(parent, b);
    if (a == b)
        return 1;
    return 0;
}

int main()
{
    int parent[11];
    for (int i = 1; i <= 10; i++)
    {
        parent[i] = i;
    }

    unionParent(parent, 1, 2);
    unionParent(parent, 2, 3);
    unionParent(parent, 3, 4);
    unionParent(parent, 5, 6);
    unionParent(parent, 6, 7);
    unionParent(parent, 7, 8);

    printf("1과 5는 연결되어 있나 ? %d\n", findparent(parent, 1, 5)); // 0 (false)

    unionParent(parent, 1, 5);
    printf("1과 5는 연결되어 있나 ? %d\n", findparent(parent, 1, 5)); // 1 (true)

    
    return 0;
}
```

