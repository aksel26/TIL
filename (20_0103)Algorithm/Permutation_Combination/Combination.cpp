#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> set;
    int n = 3;
    int r = 2;
    for (int j = 0; j < n - r; j++)
    {
        set.push_back(0);
    }
    for (int j = 0; j < r; j++)
    {
        set.push_back(1);
    }

    do
    {
        for (int j = 0; j < n; j++)
        {
            if (set[j])
            {
                cout << j << ' ';
            }
        }
        cout << '\n';

    } while (next_permutation(set.begin(), set.end()));

    return 0;
}


    // 결과
    // 2 3 4 
    // 1 3 4 
    // 1 2 4 
    // 1 2 3 
    // 0 3 4 
    // 0 2 4 
    // 0 2 3 
    // 0 1 4 
    // 0 1 3 
    // 0 1 2 