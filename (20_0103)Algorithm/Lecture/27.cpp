#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

int ch[101];
int fac(int a)
{
    if (a == 1)
        return 1;
    return fac(a - 1) * a;
};

int main()
{

    int n;
    scanf("%d", &n);

    // factorial 결과값
    int num = fac(n);

    // 나눌 소수를 담는 a
    vector<int> a(n);

    // 배열 idx
    int idx = 0;

    // 소수 판별용 변수
    int check = 0;

    // 소수
    for (int i = 2; i <= 25; i++)
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                check = 1;
                break;
            }
        }

        if (!check)
        {
            a[idx] = i;
            idx++;
        }

        check = 0;
    }

    // 배열 크기
    int size = a.size();
    int idx2 = 0;
    while (1)
    {

        if (num % a[idx2] == 0)
        {

            ch[idx2]++;
            num /= a[idx2];
        }
        else
        {
            idx2++;
        }

        if (num == 1)
            break;
    }

    for (int i = 0; i < size; i++)
    {
        if (ch[i] != 0)
            printf("%d ", ch[i]);
    }

    return 0;
}