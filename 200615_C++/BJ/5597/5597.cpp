#include <iostream>

using namespace std;
int arr[31];
int main()
{
    int num;
    for (int i = 0; i < 28; i++)
    {
        cin >> num;

        arr[num] = 1;
    }

    for (int i = 1; i < 31; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}