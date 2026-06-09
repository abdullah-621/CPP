// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {

//   vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

//   cout << "size: " << vec.size() << endl;
//   cout << "capacity: " << vec.capacity() << endl;

//   auto start = vec.begin();
//   auto end = vec.begin() + 3;

//   vec.erase(start, end);

//   for (int i : vec)
//   {
//     cout << i << " ";
//   }
//   cout << endl;

//   cout << "size: " << vec.size() << endl;
//   cout << "capacity: " << vec.capacity() << endl;

//   return 0;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  vector<int> vec;
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int value;
    cin >> value;
    vec.push_back(value);
  }
  int x;
  cin >> x;
  vec.erase(vec.begin() + x - 1);

  for (int i : vec)
  {
    cout << i << " ";
  }

  cout << endl;

  int a, b;
  cin >> a >> b;
  vec.erase(vec.begin() + a, vec.begin() + b);

  cout << vec.size() << endl;

  for (int i : vec)
  {
    cout << i << " ";
  }

  return 0;
}
