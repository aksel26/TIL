#include <iostream>
#include <vector>

using namespace std;

int main()
{


    // vertor 사이즈
    vector<int> array2 = {1, 2, 3, 4, 5};

    cout << array2.size() << endl;

    vector<int> array3 = {1, 2, 3};

    cout << array3.size() << endl;

    vector<int> array4{1, 2, 3};

    cout << array4.size() << endl;


    vector<int> arr{1, 2, 3, 6, 7, 9};

    // arr.resize(10);

    // 벡터 출력 방법 1
    for (auto i : arr)
    {
        cout << i << ' ';
    }
    cout << '\n';
    // 배벡터출력 방법 2
    for (auto &itr : arr)
    {
        cout << itr << ' ';
    }
    cout << endl;

    //벡터 요소 출력
    cout << array2[1] << endl;
    cout << array2.at(2) << endl;


    // 동적 배열과 비교 (메모리 삭제 관련)
    int *my_arr = new int[5];
    delete[] my_arr; //꼭 지워주어야 한다

    return 0;
}
