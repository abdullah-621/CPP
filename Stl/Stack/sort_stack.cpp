#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

  stack<int> nums;
  nums.push(4);
  nums.push(5);
  nums.push(6);
  nums.push(7);

  vector<int> temp;
  cout << "Orginal Stack: ";

  while (!nums.empty())
  {
    temp.push_back(nums.top());
    cout << nums.top() << " ";
    nums.pop();
  }
  cout << endl;

  sort(temp.rbegin(), temp.rend());
  cout << "Sort vector: ";
  for (int val : temp)
  {
    cout << val << " ";
  }
  cout << endl;

  for (int val : temp)
  {
    nums.push(val);
  }

  cout << "sort stack: ";
  while (!nums.empty())
  {
    cout << nums.top() << " ";
    nums.pop();
  }

  return 0;
}