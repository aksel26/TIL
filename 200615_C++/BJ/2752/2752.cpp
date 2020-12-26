#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int a;
    vector<int> v(3);
    for (int i = 0; i < v.size(); i++)
    {
        scanf("%d", &v[i]);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}