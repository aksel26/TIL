# Merge Sort

</br> 

**<u>일단 반으로 자르고 나중에 합쳐서 정렬</u>**

</br> 

- 퀵정렬과 마찬가지로 <u>분할 정복</u> 방법을 채택
  - **O(logN * N)** 의 시간복잡도
  - 편향되게 분할할 가능성이 있는 퀵정렬과는 다르게,
  - 병합정렬은 **`O(NlogN)`을 보장**할 수 있다. 정확히 <u>반절씩</u> 자르기 때문에.
    - 피벗값이 없을 수 있는 이유이기도 하다. 

</br> 

- 정렬을 위한 배열을 추가적으로 생성해야하기 때문에 **메모리 낭비**가 있을 수 있지만, 

  **시간복잡도를 보장**해주는 장점이 있다.

```c++
#include <stdio.h>

int number = 8;

//정렬된 데이터를 담을 배열
int sorted[8]; //정렬 배열은 반드시 전역변수로!

void merge(int a[], int m, int middle, int n)
{
    int i = m;
    int j = middle + 1;
    int k = m;

    // 작은 순서대로 배열에 삽입
    while (i <= middle && j <= n)
    {
        if (a[i] <= a[j])
        {
            sorted[k] = a[i];
            i++;
        }
        else
        {
            sorted[k] = a[j];
            j++;
        }
        k++;
    }
  
    //남은 데이터도 삽입
    if (i > middle)
    {
        for (int t = j; i <= n; i++)
        {
            sorted[k] = a[t];
            k++;
        }
    }
    else
    {
        for (int t = i; t <= middle; t++)
        {
            sorted[k] = a[t];
            k++;
        }
    }

    // 정렬된 배열을 삽입
    for (int t = m; t <= n; t++)
    {
        a[t] = sorted[t];
    }
}

void mergeSort(int a[], int m, int n)
{
  //크기가 1보다 큰 경우
    if (m < n)
    {
        int middle = (m + n) / 2;
      // middle보다 왼쪽
        mergeSort(a, m, middle);
      // middle보다 오른쪽
        mergeSort(a, middle + 1, n);
      //나중에 합쳐
        merge(a, m, middle, n);
    }
}

int main()
{
    int array[8] = {7, 6, 5, 8, 3, 5, 9, 1};
    mergeSort(array, 0, number - 1);
    for (int i = 0; i < number; i++)
    {
        printf("%d ", array[i]);
    }
}
```

- 이해가 안됐던 부분.

  - 재귀함수 부분

    mergeSort함수에서 재귀함수의 호출 순서에 대해 헷갈렸다.

    ***함수가 호출되면 스택프레임이라는 곳에 관련 정보들이 스택에 생성된다.***
    
    </br> 

- **Flow**

  1. *---> 조건에 맞다면,*

     mergeSort함수를 계속 호출하고(분할), 

     </br> 

  2. *---> 조건에 맞지 않는다면,*

     그 다음줄의 mergeSort를 호출한다.

     </br> 

  3. *--> 그 마저도 조건에 맞지 않게 된다면*

      merge함수를 이용해 **병합**시킨다.

     </br> 

  4. 병합이 되면 <u>그 전의 배열</u>로 돌아와 <u>오른쪽 부분을 다시 분할</u>한다.

     </br> 

  5. 조건에 맞지 않으면 merge(병합) 함수를 호출
  6. 다시 그 전의 배열로 올라간다.
  7. 반복..

  

  