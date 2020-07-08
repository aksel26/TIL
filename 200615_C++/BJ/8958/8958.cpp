#include <iostream>
#include <string>

using namespace std;
int main()

{

    int tcase, cnt = 0, sum = 0;
    cin >> tcase;
    string arr[100];
    for (int i = 0; i < tcase; i++)
    {
        string ox;
        cin >> ox;
        string str(ox);

        for (int i = 0; i < str.length(); i++)
        {
            arr[i] = str.substr(i, 1);
        }

        for (int i = 0; i < str.length(); i++)
        {
            if (arr[i] == "O")
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            sum += cnt;
        }
        cout << sum << endl;
        sum = 0, cnt = 0;
    }

    return 0;
}