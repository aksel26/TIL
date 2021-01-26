#include <iostream>
#include <queue>

using namespace std;

queue<int> q;
void push(int x)
{
    q.push(x);
}
int pop()
{
    if (q.empty())
        return -1;
    else
    {
        int tmp = q.front();
        q.pop();
        return tmp;
    }
}

int front()
{
    if (q.empty())
        return -1;
    else
        return q.front();
}
int back()
{
    if (q.empty())
        return -1;
    else
        return q.back();
}

int size()
{
    return q.size();
}

int empty()
{
    if (q.empty())
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
        else if (str == "front")
        {
            cout << front() << '\n';
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
        else if (str == "back")
        {
            cout << back() << '\n';
        }
    }

    return 0;
}
