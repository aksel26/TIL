#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{

    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, num;

    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num != 0)
        {
            st.push(num);
        }
        else if (num == 0)
        {
            st.pop();
        }
    }
    int sum = 0;
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }

    cout << sum << endl;

    return 0;
}
