#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    vector<int> v;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a);
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    if (v[0] == v[1] && v[1] == v[2])
        printf("%d\n", 10000 + (v[0] * 1000));
    else if (v[0] == v[1])
        printf("%d\n", 1000 + v[0] * 100);
    else if (v[1] == v[2])
        printf("%d\n", 1000 + v[1] * 100);
    else if (v[0] == v[2])
        printf("%d\n", 1000 + v[0] * 100);
    else
        printf("%d\n", v[2] * 100);
    return 0;
}