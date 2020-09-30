#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n = 4;
    int r = 3;
    vector<int> set;
    for (int i = 0; i < n; i++)
    {
        set.push_back(i);
    }

    do
    {
        for (int i = 0; i < r; i++)
        {
            cout << set[i] << ' ';
        }
        cout << '\n';
    } while (next_permutation(set.begin(), set.end()));

    return 0;
}



// 결과 
// 0 1 2 
// 0 1 3 
// 0 2 1 
// 0 2 3 
// 0 3 1 
// 0 3 2 
// 1 0 2 
// 1 0 3 
// 1 2 0 
// 1 2 3 
// 1 3 0 
// 1 3 2 
// 2 0 1 
// 2 0 3 
// 2 1 0 
// 2 1 3 
// 2 3 0 
// 2 3 1 
// 3 0 1 
// 3 0 2 
// 3 1 0 
// 3 1 2 
// 3 2 0 
// 3 2 1 