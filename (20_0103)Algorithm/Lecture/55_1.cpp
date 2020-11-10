#include <stdio.h>

#include <stack>

using namespace std;

int main()
{
    int n, j = 1, i;

    scanf("%d", &n);
    int a[31];
    int b[31];
    char c[n];
    char res = ' ';
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i <= n; i++)
    {
        b[i] = i;
    }

    stack<int> s;
    int idx = 1;
    while (!s.empty())
    {
        s.push(a[idx]);
        if (a[idx] == b[j])
        {
            s.pop();
            res += 'O';
            j++;
            idx++;
        }
        else
        {
            res += 'P';
            idx++;
        }
    }

    printf("%c", res);

    return 0;
}