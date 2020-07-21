#include <iostream>
#include <string>
using namespace std;
int main()
{
    int player ;   
    string name, result;
    string arr[5];
    int arr2[5] = {0,};
    cin>>player;
    for (int i = 0; i < player; i++)
    {
        cin>>name;
        


        arr[i] = name.substr(0,2);

        for (int j = 0; j < player; j++)
        {
            if(arr[i] == arr[j]){
                arr2[i]++;
            }else{
                arr2[i+1]++;
            }
        }
        

    }
    


    

    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<"  ";
    }
    

    // cout<<result<endl;
  
    return 0;
}