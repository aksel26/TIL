#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;
    int res = (A + B) % C;
    int res1 = ((A % C) + (B % C)) % C;
    int res2 = (A*B) % C;
    int res3 = ((A % C) * (B % C)) % C;
    cout << res << "\n"
         << res1 << "\n"
         << res2 << "\n"
         << res3 << "\n"
         << endl;
    return 0;
}