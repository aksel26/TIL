#include <iostream>
#include <map>
#include <string>

using namespace std;

template <typename K, typename V>
void print(map<K, V> &m)
{
    for (auto itr = m.begin(); itr != m.end(); ++itr)
    {
        cout << itr->first << " " << itr->second << endl;
    }
}

template <typename K, typename V>
void search(map<K, V> &m, K key)
{
    auto itr = m.find(key);
    if (itr != m.end())
    {
        cout << key << "-->" << itr->second << endl;
    }
    else
    {
        cout << key << "은(는) 목록에 없다." << endl;
    }
}
int main()
{

    map<string, double> pitcher_list;

    pitcher_list.insert(pair<string, double>("박세웅", 2.23));
    pitcher_list.insert(pair<string, double>("해커", 2.93));
    pitcher_list.insert(pair<string, double>("피어밴드", 2.95));

    pitcher_list.insert(make_pair("차우찬", 3.04));
    pitcher_list.insert(make_pair("장원준", 3.05));
    pitcher_list.insert(make_pair("핵터", 3.09));

    pitcher_list["니퍼트"] = 3.56;
    pitcher_list["박종훈"] = 3.76;
    pitcher_list["켈리"] = 3.90;

    print(pitcher_list);

    cout << "박세웅의 방어율은 ? " << pitcher_list["박세웅"] << endl;

    pitcher_list["오승환"] = 3.58;

    // 없는 키를 출력하면 double의 default인 0이 출력된다. (잘못된 정보) --> find를 활용하자
    // ---> cout << "류현진의 방어율은 ?" << pitcher_list["류현진"] << endl;

    search(pitcher_list, string("오승환"));
    search(pitcher_list, string("류현진"));

    return 0;
}