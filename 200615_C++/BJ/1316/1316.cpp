#include <iostream>
#include <string>

using namespace std;

int main()
{

    int tcase, j, cnt = 0;

    string str;
    int arr[26];

    cin >> tcase;

    for (int i = 0; i < tcase; i++)
    {
        cin >> str;
        fill_n(arr, 26, 0);

        
        arr[str[0] - 97] = 1;
        for (j = 1; j < str.length(); j++)
        {
            if (str[j - 1] != str[j])
            {

                int idx = str[j] - 97;
                if (arr[idx] == 0)
                {
                    arr[idx]++;
                }
                else
                {
                    break;
                }
            }
        }
        if (j == str.length())
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
