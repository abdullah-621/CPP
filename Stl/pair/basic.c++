#include <iostream>
#include <vector>
using namespace std;
int main()
{

  pair<int, int> p1 = {1, 2};
  pair<int, char> p2 = {2, 'q'};
  pair<string, float> p3 = {"Abdullah", 3.18};

  cout << p3.first << endl
       << p3.second << endl
       << p2.second;

  pair<int, pair<float, string>> p4 = {1, {4.40, "Abdullah"}}; // pair of pair

  cout << p4.first << endl;
  cout << p4.second.first << endl;
  cout << p4.second.second << endl;

  // vector of pair
  vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

  vec.push_back({5, 6});  // insert
  vec.emplace_back(7, 8); // in place object creat

  for (pair<int, int> i : vec)
  {
    cout << i.first << " " << i.second << endl;
  }

  return 0;
}
