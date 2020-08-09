#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    vector<vector<int>> arr;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vector<int> element(n);
        arr.push_back(element);
    }

    cout << arr.size() << endl;

    for (int i = 0; i < n; i++)
    {
        // cout<<arr[i].size()<<", ";
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = n;
        }
    }

    cout << '\n';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i].clear();
        cout << arr[i].size() << ",";
    }
    cout << endl;

    arr.clear();

    cout << arr.size() << endl;

    return 0;
}
