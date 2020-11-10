#include <stdio.h>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int n, j = 1, i, m;

    scanf("%d", &n);
    vector<int> a(n + 1);
    vector<char> c;
    stack<int> s;

    for (i = 1; i <= n; i++)
    {
        a[i] = i;
    }

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        s.push(m);
        c.push_back('P');
        while (1)
        {
            if (s.empty())
                break;
            if (a[j] == s.top())
            {
                s.pop();
                j++;
                c.push_back('O');
            }
            else
                break;
        }
    }

    if (!s.empty())
        printf("impossible\n");
    else
    {
        for (i = 0; i < c.size(); i++)
        {
            printf("%c ", c[i]);
        }
    }

    return 0;
}