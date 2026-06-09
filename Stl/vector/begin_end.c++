#include <iostream>
#include <vector>
using namespace std;
int main()
{

  vector<int> vec = {1, 2, 3, 4, 5, 6};

  cout << "First Value:" << *vec.begin() << endl;
  cout << "Last + 1 Value:" << *vec.end() << endl;
  cout << "Last Value:" << vec.back() << endl;

  vector<int>::iterator it;
  for ( it = vec.begin(); it != vec.end(); it++)   // forward
  {
    cout << *(it) << " ";
  }

  cout << endl;

  // vector<int>::reverse_iterator it; = auto

  for (auto it = vec.rbegin(); it != vec.rend(); it++) // backward
  {
    cout << *(it) << " ";
  }
  

  return 0;
}
