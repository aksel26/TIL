#include <numeric>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int ar[] = {1, 2, 5, 10, 15, 12, 20};
  vector<int> vi(&ar[0], &ar[7]);
  vector<int> vi2;

  adjacent_difference(vi.begin(), vi.end(), back_insert_iterator(vi2));
  dump("부분차", vi2);

  return 0;
}