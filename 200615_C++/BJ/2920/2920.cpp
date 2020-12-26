#include <iostream>

using namespace std;

int main()
{

    int n;
    int ch[9];
    for (int i = 1; i <= 8; i++)
    {
        scanf("%d", &n);
        ch[i] = n;
    }

    for (int i = 1; i < 8; i++)
    {
        int tmp = ch[i];
        if (tmp + 1 == ch[i + 1])
        {
            if (i == 7)
                printf("ascending\n");
        }
        else if (tmp - 1 == ch[i + 1])
        {
            if (i == 7)
                printf("descending\n");
        }
        else
        {

            printf("mixed\n");
            break;
        }
    }
}