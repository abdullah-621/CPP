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

bool reverse(string s, int i, int j)
{
  if (i >= j)
  {
    return true;
  }
  if (s[i] != s[j - 1])
  {
    return false;
  }

  return reverse(s, i + 1, j - 1);
}
int main()
{
  string s;
  cin >> s;
  cout << endl;
  int j = s.length();
  cout << reverse(s, 0, j);

  return 0;
}
