#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;

    string s;
    cin >> n >> s;
    long long num = 0;
    long long po = 1;
    int mod = 1234567891;

    for (int i = 0; i < n; i++)
    {
        int ascii = s[i] - 96;

        int temp = (ascii * po) % mod;

        num += temp;

        po *= 31;
        po %= mod;
    }
    cout << num % mod << '\n';
    return 0;
}
