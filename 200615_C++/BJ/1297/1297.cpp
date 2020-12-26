#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int l, a, b;

    double c, n, m;

    cin >> l >> a >> b;

    c = sqrt(a * a + b * b);

    n = a * l / c;
    m = b * l / c;

    printf("%d %d\n ", (int)n, (int)m);

    return 0;
}