#include <iostream>
#include <vector>
using namespace std;
int main()
{

  vector<int> vec1 = {1,2,3,4};

  // vec1.push_back(1);
  // vec1.push_back(2);
  // vec1.push_back(3);
  

  vector<int> vec2;
  cout << vec2.empty() << endl;

  vec2.swap(vec1);

  cout << "Size of vec1:" << vec1.size() << endl
       << "Size of vec2:" << vec2.size() << endl;
  return 0;
}