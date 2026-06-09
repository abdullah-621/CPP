#include<iostream>
#include<vector>
using namespace std;
int main(){

  vector<int> vec;
  
  if (vec.empty())
  {
    cout << "Yes,The vector is empty";
  }
  else{
    cout << "No,The vector is not empty";
  }
  
  return 0;
}