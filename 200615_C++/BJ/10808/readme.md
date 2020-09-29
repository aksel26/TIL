# BOJ 10808

## 알파벳 개수

### 문제

### <img src="readme.assets/image-20200929151302254.png" alt="image-20200929151302254" width ="70%"/>

### <br/> 코드

```c++
#include <iostream>
#include <string>

using namespace std;
int alphabet[26];
int main()
{

    string str;

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        alphabet[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alphabet[i] << ' ';
    }

    return 0;
}
```

