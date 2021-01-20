#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{

    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    list<int> lt;

    for (int i = 1; i <= n; i++)
    {

        lt.push_back(i);
    }

    while (lt.size() > 1)
    {
        lt.pop_front();
        lt.push_back(lt.front());
        lt.pop_front();
    }

    cout << lt.front() << '\n';
    return 0;
}
