#include <iostream>
#include <stack>

using namespace std;

stack<int> st;
void push(int x)
{
    st.push(x);
}
int pop()
{
    if (st.empty())
        return -1;
    else
    {
        int tmp = st.top();
        st.pop();
        return tmp;
    }
}

int top()
{
    if (st.empty())
        return -1;
    else
        return st.top();
}

int size()
{
    return st.size();
}

int empty()
{
    if (st.empty())
        return 1;
    else
        return 0;
}
int main(int argc, char const *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, num;
    string str;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> num;
            push(num);
        }
        else if (str == "top")
        {
            cout << top() << '\n';
        }
        else if (str == "size")
        {
            cout << size() << '\n';
        }
        else if (str == "empty")
        {
            cout << empty() << '\n';
        }
        else if (str == "pop")
        {
            cout << pop() << '\n';
        }
    }

    return 0;
}
