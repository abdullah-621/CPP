#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{

  stack<int> nums;

  nums.push(5);
  nums.push(2);
  nums.push(2);
  nums.push(4);
  nums.push(7);

  vector<int> vec;

  while (!nums.empty())
  {
    vec.push_back(nums.top());
    nums.pop();
  }

  for (int i = 0; i < vec.size(); i++)
  {
    for (int j = i + 1; j < vec.size() - 1; j++)
    {
      if (vec[i] == vec[j])
      {
        vec.erase(vec.begin() + j);
      }
    }
  }

  for (int i = vec.size() - 1; i >= 0; i--)
  {
    cout << vec[i] << " ";
  }

  return 0;
}
