#include <stdio.h>

int number, data[1000001];

void quick(int *data, int start, int end)
{

    if (start >= end)
    {
        return;
    }
    int key = start;
    int i = start + 1;
    int j = end;
    int temp;

    while (i <= j)
    {
        while (data[i] <= data[key])
        {
            i++;
        }
        while (data[j] >= data[key] && j > start)
        {
            j--;
        }

        if (i > j)
        {
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }
        else
        {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    quick(data, start, j - 1);
    quick(data, j + 1, end);
}
int main()
{

    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &data[i]);
    }

    quick(data, 0, number - 1);

    for (int i = 0; i < number; i++)
    {
        printf("%d\n", data[i]);
    }

    return 0;
}