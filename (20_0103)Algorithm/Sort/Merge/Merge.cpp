#include <stdio.h>
#define MAX 8
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
    if (m < n)
    {
        int middle = (m + n) / 2;
        // printf("%s %d \n", "middle : ", middle);
        mergeSort(a, m, middle);
        // printf("%s %d %d \n", "first",m,middle);
        mergeSort(a, middle + 1, n);
        // printf("%s %d %d \n", "second",middle+1, n);
        merge(a, m, middle, n);
        // printf("%s\n", "merge");
    }
}

int main()
{
    int array[MAX] = {7, 6, 5, 8, 3, 5, 9, 1};
    mergeSort(array, 0, number - 1);
    for (int i = 0; i < number; i++)
    {
        printf("%d ", array[i]);
    }
}