#include <iostream>
#include <stack>

using namespace std;

int main()
{

    int k, n;
    cin >> k;
    int stack1[k];

    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        cin >> n;
        if (n != 0)
        {
            st.push(n);
        }
        else if (n == 0)
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