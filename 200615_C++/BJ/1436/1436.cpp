#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    string result;
    int cnt = 0, num = 665;

    while (1)
    {
        string temp = to_string(num);
        if (temp.find("666") != -1)
        {
            cnt++;
        }
        if (cnt == n)
        {

            result = temp;
            break;
        }
        else
            ++num;
    }
    cout << result << endl;
    return 0;
}
