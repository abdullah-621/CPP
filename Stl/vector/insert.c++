#include<iostream>
#include<vector>

using namespace std;
int main(){

  vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

  cout << vec.size() << endl;

  vec.insert(vec.end() - 2, 10);

  cout << vec.size() << endl;

  for (int i : vec)
  {
    cout << i << " ";
  }
  

  return 0;
}