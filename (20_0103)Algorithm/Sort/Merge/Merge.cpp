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
    printf("%s %d\n", "*****m = ", m);
    printf("%s %d\n", "*****middle = ", middle);
    printf("%s %d\n", "*****n = ", n);
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
        for (int t = j; t <= n; t++)
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

    // 정렬된 배열을 삽입r
    for (int t = m; t <= n; t++)
    {
        a[t] = sorted[t];
    }

    
}

void mergeSort(int a[], int m, int n)
{
    if (m < n)
    {
        int middle = m + (n - m) / 2;
        printf("\n나누기 m = %d, n = %d, middle = %d", m, n,middle);

        mergeSort(a, m, middle);
        printf("%s %s %d %s %d %s %d\n", "first :: ", "m = ",m," , middle = " ,middle," ,n = ", n);
        
        mergeSort(a, middle + 1, n);
        printf("%s %d %s %d \n", "middle +1  = ",middle+1,", n = " ,n);
        
        merge(a, m, middle, n);
        printf("%s %s %d %s %d %s %d \n", "Merge :: ", "m = ",m," , middle = " ,middle," , n = ", n);
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