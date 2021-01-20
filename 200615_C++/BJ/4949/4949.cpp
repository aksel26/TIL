#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{

    while (1)
    {
        stack<char> st;
        string str;
        getline(cin, str);

        if (str == ".")
            return 0;
        int flag = 0;
        for (int i = 0; i < str.size(); i++)
        {
            char temp = str[i];
            if (temp == '(' || temp == '[')
            {
                st.push(temp);
            }
            else if (temp == ')')
            {
                if (st.empty() || st.top() != '(')
                {
                    flag = 1;
                    break;
                }
                st.pop();
            }
            else if (temp == ']')
            {
                if (st.empty() || st.top() != '[')
                {
                    flag = 1;
                    break;
                }
                st.pop();
            }
        }

        if (flag || !st.empty())
        {
            cout << "no" << '\n';
        }
        else
        {
            cout << "yes" << '\n';
        }
    }
    return 0;
}
