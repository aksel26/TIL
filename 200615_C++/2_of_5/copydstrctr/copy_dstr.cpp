#include <iostream>

using namespace std;

class DCArray
{

    int *base;    // 저장소 위치 정보
    int capacity; // 저장소 용량
    int usage;    // 사용량

public:
    DCArray(int capa)
    {
        capacity = capa;
        base = new int[capa];

        usage = 0;
    }

    DCArray(const DCArray &dc)
    {
        capacity = dc.capacity;
        base = new int[capacity];
        usage = dc.usage;
        for (int i = 0; i < usage; i++)
        {
            base[i] = dc.base[i];
        }
    }

    ~DCArray()
    {
        delete[] base;
    }

    void pushBack(int data)
    {
        if (usage < capacity)
        {
            base[usage] = data;
            usage++;
        }
    }

    void List()
    {
        for (int i = 0; i < usage; i++)
        {
            cout << base[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    DCArray dcarrary(10);
    dcarrary.pushBack(4);
    DCArray dcarr2(dcarrary);
    dcarrary.List();
    dcarr2.List();

    dcarrary.pushBack(9);
    dcarr2.pushBack(6);

    dcarrary.List();
    dcarr2.List();
}