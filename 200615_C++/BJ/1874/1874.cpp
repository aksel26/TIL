#include <iostream>
#include <stack>
#include <vector>

using namespace std;
int arr[100001];
int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    stack<int> st;
    vector<char> v;
    int idx = 0;
    for (int i = 1; i <= n; i++)
    {
        st.push(i);
        v.push_back('+');
        if (i == st.top())
        {
            while (st.top() == arr[idx])
            {
                st.pop();
                idx++;
                v.push_back('-');
                if (st.empty())
                    break;
            }
        }
    }
    if (st.empty())
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\n";
        }
    else
    {
        cout << "no" << '\n';
    }
    return 0;
}
