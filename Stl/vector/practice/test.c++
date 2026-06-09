#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int check_rearranged(vector<int> vec1)
{

  sort(vec1.begin(), vec1.end());

  for (int i = 0; i < vec1.size() - 1; i++)
  {
    if ((vec1[i] + 1) != (vec1[i + 1]))
    {
      return false;
    }
  }
  return true;
}
int main()
{

  vector<int> vec = {1, 2, 5, 0, 3, 6, 7,4};

  int test = check_rearranged(vec);
  if (test == true)
  {
    cout << "The vector is rearranged." << test << endl;
  }
  else
  {
    cout << "The vector is not rearranged." << test << endl;
  }

  return 0;
}