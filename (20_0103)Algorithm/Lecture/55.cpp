#include <stdio.h>
#include <stack>

using namespace std;

int main()
{

    int n, i;
    scanf("%d", &n);
    int a[30];
    char res = ' ';
    for (i = 0; a[i] != '\0'; i++)
    {
        scanf("%d", &a[i]);
    }

    stack<int> s;
    int idx = 0;
    int next = 0;

    while (s.empty())
    {
        s.push(a[idx]);
        res += 'P';
        a[idx] = -1;
        if (s.top() != 1)
            idx++;
        else
        {
            int top = s.top();
            s.pop();
            res += 'O';
            next = top + 1;

            if (next == s.top())
            {
                s.pop();
                res += 'O';
            }
            else
            {
                s.push(a[idx + 1]);
                res += 'P';
                a[idx + 1] = -1;
                int top = s.top();

                if (next == top)
                {
                    s.pop();
                    res += 'O';
                }
            }
        }

        s.pop();
        res += 'O';
    }

    printf("%c ", res);

    return 0;
}