#include <iostream>

using namespace std;

#define Rmax 5
#define Cmax 5

int main (){
    int score[Rmax][Cmax]={
        {78,65,80},
        {93,62,84},
        {38,45,83},
        {88,35,86},
        {98,75,88},

    };

    int i , j , sum;

    float avg[Rmax];

    for ( i = 0; i < Rmax; i++)
    {
        sum = 0 ;
        for ( j = 0; j < Cmax; j++)
        {
            sum += score[i][j];
        }
        avg[i] = sum/ 3.0;
        
    }

    for ( i = 0; i < Rmax; i++)
    {
        cout<<avg[i]<<endl;
    }
    

    cout <<sizeof(int*)<<endl;
    
    return 0 ;
}