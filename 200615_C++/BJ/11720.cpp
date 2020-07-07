#include <iostream>
#include <string>

using namespace std;

int main()
{

    int size, sum = 0;
    string nums;

    cin >> size >> nums;
    string tmp[size];
    int arr[size];

    for (int i = 0; i < nums.size(); i++)
    {
        tmp[i] = nums.substr(i, 1);

        arr[i] = stoi(tmp[i]);

        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}