#include <stdio.h>
#include <vector>
using namespace std;
int main()
{

    int a, b, i, j, tmp;
    scanf("%d", &a);
    vector<int> arr1(a);
    vector<int> arr2(b);

    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &b);

    for (i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }

    if (arr2.size() > arr1.size())
    {
        for (i = 0; i < a; i++)
        {
            tmp = arr1[i];

            for (j = 0; j < a - 1; j++)
            {
                if (tmp < arr2[j])
                {
                    arr2[j + 1] = arr2[j];
                }
            }

            arr2[j] = tmp;
        }
    }

    for ( i = 0; i < b; i++)
    {
        printf("%d ", b[i]);
    }
    
    

    return 0;
}