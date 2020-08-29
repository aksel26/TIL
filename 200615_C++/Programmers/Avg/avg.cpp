#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double sum = 0;
    
    for(int i = 0 ; i< arr.size(); i++){
        
       sum +=  arr[i];
        
    }

    
    answer = sum / arr.size();
    
    cout<<answer<<endl;
    return answer;
}

int main(){

    vector<int> arr{1,2,3,4};
    
    solution(arr);
    return 0;
}