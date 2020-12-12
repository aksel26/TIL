#include <iostream>

using namespace std;
int unf[1001];

int find1(int v)
{
    if (v == unf[v])
        return v;
    else
        // return find1(unf[v]);
        //메모이제이션
        return unf[v] = find1(unf[v]);
}
void Union(int a, int b)
{
    a = find1(a);
    b = find1(b);

    if (a != b)
        unf[a] = b;
}
int main()
{

    int n, m, i, a, b;

    cin >> n >> m;

    for (i = 1; i <= n; i++)
    {
        unf[i] = i;
    }

    for (i = 1; i <= m; i++)
    {
        cin >> a >> b;
        Union(a, b);
    }
    cin >> a >> b;
    a = find1(a);
    b = find1(b);
    if (a == b)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}