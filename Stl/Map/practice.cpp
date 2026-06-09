// #include<iostream>
// #include<map>
// using namespace std;
// int main(){

//   map<string, int> nums = {{"masum", 23}, {"nomna", 20}, {"shafi", 90}};

//   // map<string, int> :: iterator it;

//   // for (it = nums.begin(); it != nums.end();it++)
//   // {
//   //   cout << it -> first << " = " << (*it).second << endl;
//   // }

//   for ( auto it : nums)
//   {
//     cout << it.first << " = " << it.second << endl;
//   }

//   return 0;
// }

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter number : ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < 2 * n - i - 1; j++)
    {
      cout << "*";
    }
    for (int k = 0; k <= i - 1; k++)
    {
      cout << " ";
    }
    
    
    cout << endl;
  }

  return 0;
}