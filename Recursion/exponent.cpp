// #include<iostream>
// using namespace std;

// void reverse(string &s , int n){

//   if (n < 0)
//   {
//     return;
//   }
//   cout << s[n - 1];
//   reverse(s, n - 1);

// }
// int main(){

//   string s;
//   cin >> s;
//   int n = s.length();
//   reverse(s, n);
//   cout << endl;
//   cout << s;
// }
// #include<iostream>
// using namespace std;

// void reverse(string s ,int i , int j){

//   cout << " Call received for " << '"' << s << '"' << endl;

//   if (i > j)
//   {
//     return;
//   }
//   swap(s[i], s[j - 1]);
//   i++;
//   j--;

//   reverse(s, i, j);
// }
// int main(){

//   string s;
//   cin >> s;
//   cout << endl;
//   int j = s.length();
//   reverse(s, 0, j);
//   cout << endl;
//   cout << s;
// }

#include <iostream>
using namespace std;

int power(int a, int b)
{
  cout << "For call " << a << " and " << b << endl;

  if (b == 0)
    return 1;
  if (b == 1)
    return a;

  int ans = power(a, b / 2);
  if (b % 2 == 0)
  {
    return ans * ans;
  }
  else
  {
   return a *ans *ans;
  }
}
int main()
{
  int a, b;
  cin >> a >> b;

  cout << power(a, b);

  return 0;
}
