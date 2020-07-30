# Quck Sort

- ### 개념

  : **`Pivot` 값으로 기준을 나누고 `key` 값과 교환하는 방식**

  </br> 

- ### 동작 순서

  1. `key`  값은 맨앞에 값을 정하고,
  2. 이 값보다 최초의 작은 값을 왼쪽에서 오른쪽 방향 (--->)으로 찾고,
  3. 최초의 큰 값을 오른쪽에서 왼쪽 방향 (<---) 으로 찾는다.
  4. 엇갈리게 되는 순간 `key` 값과 엇갈린 값을 교환하고,
  5. 교환된 `key`  값은 `pivot` 값이 된다. (기준값)
  6. 이 값을 기준으로 양쪽으로 나눠진 배열을 각각 반복 실행.

</br> 

- ### 시간 복잡도

  - **`O(n * log(n))`** 

    - `log(n)` 에서 `log`의 역할이 복잡도 수치를 낮추는데 크게 도움이 된다.

      </br> 

  - ***하지만,*** 

    - ***최악의 경우 `O(n^2)`***
    - 어느 경우에 ????
    - 이미 정렬이 되어 있거나, 거의 정렬이 되어 있는 배열에서 가장 최악의 경우가 나올 수 있다.

</br> 

```C
#include <stdio.h>

int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end)
{
    if (start >= end)
    { //원소가 1개인 경우
        return;
    }

    int key = start; //키는 첫번째원소

    int i = start + 1; //왼쪽 출발지점
    int j = end;       // 오른쪽 출발지점

    int temp; // 바꾸기 위한 임시 변수

    while (i <= j) // 엇갈릴 때까지 반복
    {
        while (data[i] <= data[key])
        { //키 값보다 큰 값을 만나기 전까지 이동

            i++;
        }
        while (data[j] >= data[key] && j > start)
        { // 키 값보다 작은 값을 만날때까지 반복
            j--;
        }

        // 엇갈린 경운
        if (i > j)
        {

            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }
        else
        {
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }

    // 재귀적 방법
    // 값이 확정된 이후 기준점의 왼쪽에서 연산 반복
    quickSort(data, start, j - 1);
    // 값이 확정된 이후 기준점의 오른쪽에서 연산 반복
    quickSort(data, j + 1, end);
}
int main(void)
{
    quickSort(data, 0, number - 1);
    for (int i = 0; i < number; i++)
    {
        printf("%d ", data[i]);
    }
}
```

