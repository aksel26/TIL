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