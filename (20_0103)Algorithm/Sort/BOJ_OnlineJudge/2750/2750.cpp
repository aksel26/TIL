#include <stdio.h>

int main()
{

    int size, num, i, j, temp, min, index;
    scanf("%d", &size);
    int arr[size + 1];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        min = 9999;

        for (j = i; j < size; j++)
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

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}