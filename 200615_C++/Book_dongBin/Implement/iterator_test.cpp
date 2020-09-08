#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{

    int arr[] = {1,2,3,4,5};
    
    vector<int> vec(&arr[0],&arr[5]);

    vector<int>::iterator it;

    for (it = vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<endl;
    }
    

    return 0;
}

