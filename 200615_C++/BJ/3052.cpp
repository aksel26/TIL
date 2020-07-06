#include <iostream>
using namespace std;
int arr[10];
int temp[43];
int main()

{
    int cnt = 1, tmp;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];

        tmp = arr[i] % 42;
        if (temp[tmp] != tmp)
        {
            temp[tmp] = tmp;
            cnt++;
        }
    }

    cout << cnt << endl;

   
    return 0;
}