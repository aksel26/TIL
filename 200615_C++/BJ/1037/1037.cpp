#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    scanf("%d", &n);
    int x;
    int answer;

    vector<int> a;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    answer = a[0] * a[n - 1];
    printf("%d\n", answer);
    return 0;
}