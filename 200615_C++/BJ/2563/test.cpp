#include <iostream>

using namespace std;

int arr[3][3];

int main()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            arr[i][j] = j;
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
        
    }
    
    

    return 0;
}