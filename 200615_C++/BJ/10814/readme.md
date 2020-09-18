# BOJ 10814

## 나이순 정렬

**참고**

- **stable_sort**
  -   원래의 순서를 손상시키지 않으면서 정렬하는것을 stable sort라고 한다.
  - stable_sort는 메모리 할당을 시도해보고, 
    메모리 할당이 되면 좀 더 효율적인 방법(**O(NlogN)**)으로 정렬하고, 
    할당이 안되면 덜 효율적인 방법(**O(Nlog(N^2))**)이 사용된다.





<br/> 

### 문제

<img src="readme.assets/image-20200917221748666.png" alt="image-20200917221748666" width ="70%" />

### <br/> 코드

```c++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main()
{

    int n, age;
    string name;
    cin >> n;

    vector<pair<int, string>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }

    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << '\n';
    }

    return 0;
}

```

