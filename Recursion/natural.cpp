#include <bits/stdc++.h>
using namespace std;

int Allsum(int n)
{

  int sum;

  if(n == 1){
    return 1;
  }
  else
  {
    sum = n + Allsum(n - 1);
  }
  return sum;
}

int main()
{

  int n;
  cin >> n;
  cout << Allsum(n);

  return 0;
}

// todo : 0 1 1 2 3 5 8 13 21 34 55 89 144