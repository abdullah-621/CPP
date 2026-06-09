#include <iostream>
#include <list>
using namespace std;

int main()
{
  list<int> arr = {1, 2, 3, 4, 5};

  arr.push_back(1000);
  arr.push_front(5000);
  arr.pop_back();
  arr.pop_front();

  // it change front and back value
  arr.front() = 3000;
  arr.back() = 70000;

  // only for each loop
  for (int i : arr)
  {
    cout << i << endl;
  }
  return 0;
}