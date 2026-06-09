// #include <iostream>
// using namespace std;

// int power(int n)
// {
//   if (n == 0)
//   {
//     return 1;
//   }

//   return 2 * power(n - 1);
// }

// int main()
// {

//   int n;
//   cin >> n;
//   int result = power(n);

//   cout << result;

//   return 0;
// }

#include <iostream>
using namespace std;

void power(int n)
{
  if (n == 0)
  {
    return;
  }

  power(n - 1);
  cout << n << " ";
}

int main()
{

  int n;
  cin >> n;
  power(n);

  return 0;
}