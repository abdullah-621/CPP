#include <iostream>
#include <vector>
using namespace std;
int main()
{

  vector<int> vec(6);

  cout << "Enter the element of the array:" << endl;
  for (int i = 0; i < 6; i++)
  {
    cin >> vec[i];
  }
  cout << vec.size();

  int x;
  cout << "Enter x:";
  cin >> x;

  int find_index = 0;

  for (int i = vec.size(); i >= 0; i--)
  {
    if (vec[i] == x)
    {
      find_index = i + 1;
      cout << find_index;
      break;
    }
  }
  // cout << "The index of " << x << " is:" << find_index << endl;

  return 0;
}