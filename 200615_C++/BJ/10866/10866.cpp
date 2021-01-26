#include <iostream>
#include <deque>

using namespace std;

deque<int> dq;

void push_back(int x)
{
    dq.push_back(x);
}

void push_front(int x)
{
    dq.push_front(x);
}

int pop_front()
{
    if (dq.empty())
        return -1;
    else
    {
        int tmp = dq.front();
        dq.pop_front();
        return tmp;
    }
}
int pop_back()
{
    if (dq.empty())
        return -1;
    else
    {
        int tmp = dq.back();
        dq.pop_back();
        return tmp;
    }
}

int front()
{
    if (dq.empty())
        return -1;
    else
        return dq.front();
}
int back()
{
    if (dq.empty())
        return -1;
    else
        return dq.back();
}

int size()
{
    return dq.size();
}

int empty()
{
    if (dq.empty())
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
        if (str == "push_back")
        {
            cin >> num;
            push_back(num);
        }
        else if (str == "push_front")
        {
            cin >> num;
            push_front(num);
        }
        else if (str == "pop_back")
        {
            cout << pop_back() << '\n';
        }
        else if (str == "size")
        {
            cout << size() << '\n';
        }
        else if (str == "empty")
        {
            cout << empty() << '\n';
        }
        else if (str == "pop_front")
        {
            cout << pop_front() << '\n';
        }
        else if (str == "back")
        {
            cout << back() << '\n';
        }
        else if (str == "front")
        {
            cout << front() << '\n';
        }
    }

    return 0;
}
