#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// bottom - up 방식

int dy[50];
int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    int n;

    cin >> n;
    dy[1] = 1;
    dy[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        dy[i] = dy[i - 2] + dy[i - 1];
    }

    cout << dy[n] << '\n';
    return 0;
}
