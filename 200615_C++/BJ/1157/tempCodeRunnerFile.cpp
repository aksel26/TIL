#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{

    int cnt = 0;
    string word;
    string result;
    int asc = 0;
    int arr[127] = {0};

    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        asc = word[i];
        if (asc >= 97 && asc <= 122)
        {
            asc = asc - 32;
            arr[asc]++;
        }
        else
        {
            arr[asc]++;
        }
    }

    int max = arr[0];

    for (int i = 65; i <= 90; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            cnt = i;
        }
        if (arr[i + 1] == max)
        {
            cout << "?";
            break;
        }
    }

    result = cnt;

    cout << result << endl;

    return 0;
}