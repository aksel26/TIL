#include <stdio.h>

int main()
{

    int num, i, j, temp, min, index;
    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 3; i++)
    {
        min = 1000001;

        for (j = i; j < 3; j++)
        {

            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}