#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {



    int n; 
    cin>>n;


    vector<vector <int>> vec(n,vector<int>(2,0));

    for (int i = 0; i < n; i++)
    {
        cin>>vec[i][1]; 
        cin>>vec[i][0];
    }

    sort(vec.begin(),vec.end());


    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i][1]<<" "<<vec[i][0]<<'\n';
        
    }
    
    

    return 0;
}