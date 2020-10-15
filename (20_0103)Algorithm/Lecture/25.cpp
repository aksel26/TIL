#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int score[n];
    int rank[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
        rank[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            else if (score[i] < score[j])
            {
                rank[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", rank[i]);
    }

    return 0;
}