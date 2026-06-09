#include <iostream>
#include <vector>
using namespace std;

void say_digite(int n , string arr[])
{

  vector<string> brr;

  if (n == 0)
  {
    return;
  }

  int last = n % 10;
  n /= 10;
  say_digite(n,arr);
  cout << arr[last] << " ";
}

int main()
{

  int n;
  cin >> n;
  string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

  say_digite(n, arr);

  return 0;
}

