#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v;
    vector<int> v2;
    v.reserve(n);
    v2.reserve(n);
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    // 첫번째 원소
    int first;

    while (v.size() != 1)
    {
        first = v[0];
        v2.push_back(first);
        v.erase(v.begin());
        // 교환
        first = v[0];
        v.push_back(first);
        v.erase(v.begin());

        if (v.size() == 1)
            break;
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << v2[i] << " ";
    }
    cout << v[0] << endl;

    return 0;
}