#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &arr, int n)
{
  int count = 0;
  int max_count = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 1)
    {
      count++;
    }
    else
    {
      count = 0;
    }
    max_count = max(count, max_count);
  }

  return max_count;
}

int main()
{
  vector<int> arr = {1, 1, 0, 1, 1, 1};
  cout << search(arr, arr.size());

  return 0;
}