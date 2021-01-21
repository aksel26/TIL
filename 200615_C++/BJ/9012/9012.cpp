#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        stack<char> st;
        bool flag = false;
        for (int j = 0; j < str.size(); j++)
        {
            char temp = str[j];
            if (temp == '(')
            {
                st.push(temp);
            }
            else if (temp == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    flag = true;
                    break;
                }
                st.pop();
            }
        }

        if (flag == true || !st.empty())
        {
            cout << "NO" << endl;
        }
        else if (st.empty())
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
