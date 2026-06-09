#include <iostream>
using namespace std;

int stair_Path(int n)
{

  if (n == 1 || n == 2)
    return n;

  // if(n == 1)  
  //   return n;
  // if (n == 2)
  //   return n;

  return stair_Path(n - 1) + stair_Path(n - 2);
}

int main()
{

  int n;
  cin >> n;
  cout << stair_Path(n);

  return 0;
}