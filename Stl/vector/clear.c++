#include<iostream>
#include<vector>

using namespace std;
int main(){

  vector<int> vec;

  vec.push_back(1);
  vec.push_back(1);
  vec.push_back(1);
  vec.push_back(1);
  vec.push_back(1);

  vec.clear();

  for (int i : vec)
  {
    cout << i << " ";
  }
  cout << "Size:" << vec.size() << endl;
  cout << "capacity:" << vec.capacity ()<< endl;

  vector<int> vec1 = {1,2,3,4,5,6,7};

  vec1.clear();

  for (int i : vec1)
  {
    cout << i << " ";
  }
  cout << "Size:" << vec1.size() << endl;
  cout << "capacity:" << vec1.capacity ()<< endl;

  return 0;
}
