#include <iostream>

using namespace std;
int number = 9;
int arr[9] = {7, 6, 5, 8, 3, 5, 9, 1, 6};

int main()
{

    for (int i = 1; i < number; i++)
    {
        int c = i;

        do
        {

            int root = (c - 1) / 2;
            if (arr[root] < arr[c])
            {
                int temp = arr[root];
                arr[root] = arr[c];
                arr[c] = temp;
            }

            c = root;
        } while (c != 0);
    }

    for (int i = number - 1; i >= 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        int c = 1;
        int root = 0;

        do
        {
            c = 2 * root + 1;

            if (arr[c] < arr[c + 1] && c < i - 1)
            {
                c++;
            }

            if (arr[root] < arr[c] && c < i)
            {

                int temp = arr[root];
                arr[root] = arr[c];
                arr[c] = temp;
            }

            root = c;
        } while (c < i);
    }

    for (int i = 0; i < number; i++)
    {
        cout << arr[i] << " ";
    }
}
