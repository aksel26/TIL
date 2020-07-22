#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int arr[200] = {
        0,
    };

    int inputSize = 0;
    bool isGiveUp = true;

    vector<string> v;
    cin >> inputSize;

    v.reserve(inputSize);

    for (int i = 0; i < inputSize; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    vector<string>::iterator iter = v.begin();

        for (iter; iter != v.end(); ++iter)
    {
        arr[(int)(*iter)[0]] += 1;
    }

    for (int i = 'a'; i < 'z' + 1; ++i)
    {
        if (arr[i] >= 5)
        {
            cout << (char)i;
            isGiveUp = false;
        }
    }
    if (isGiveUp)
        cout << "PREDAJA";
}