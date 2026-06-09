#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> check_smaller(vector<int> vec1)
{
  vector<int> vec2;
  for (int i = 1; i < vec1.size() - 1; i++)
  {
    if (vec1[i] > vec1[i - 1] && vec1[i + 2] > vec1[i + 1])
    {
      vec2.push_back((vec1[i + 1]));
    }
  }
  return vec2;
}
int main()
{

  vector<int> vec = {1, 2, 5, 0, 3, 1, 7};

  vector<int> result = check_smaller(vec);
  for (int i : result)
  {
    cout << i << " ";
  }

  return 0;
}