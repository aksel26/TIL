#include <stdio.h>
#include <stack>

using namespace std;

int main()
{

    int n, k;

    stack<int> s;
    scanf("%d %d", &n, &k);
    char str[20] = "0123456789ABCDEF";
    while (n > 0)
    {
        s.push(n % k);

        n /= k;
    }

    while (!s.empty())
    {
        // 참조만 해주고 꺼내진 않는다.
        printf("%c ", str[s.top()]);
        s.pop();
    }
}
