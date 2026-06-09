// #include <iostream>
// #include <vector>
// using namespace std;

// int lower_bound(vector<int> arr)
// {
//   int n = arr.size();
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i; j < n; j++)
//     {
//       for (int k = i; k <= j; k++)
//       {
//         cout << arr[k] << " ";
//       }
//       cout << endl;
//     }
//   }
// }

// int main()
// {
//   vector<int> arr = {1, 2, 3, 4, 5};
//   cout << lower_bound(arr);

//   return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// int lower_bound(vector<int> arr, int k)
// {
//   int n = arr.size();
//   int count = 0;

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i; j < n; j++)
//     {
//       int sum = 0;
//       for (int k = i; k <= j; k++)
//       {
//         arr[k] += sum;
//         if (sum == k)
//         {
//           count++;
//         }
//       }
//     }
//   }
//   return count;
// }

// int main()
// {
//   vector<int> arr = {1, 1, 1, 1, 1, 1};
//   cout << lower_bound(arr, 2);

//   return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

string rotate(string &str)
{
  string res;
  int opened = 0;
  for (int c = 0; c < str.size(); c++)
  {
    if (str[c] == '(' && opened++ > 0)
      res += str[c];
    cout << "For : " << str[c] <<" " << opened << endl;
    if (str[c] == ')' && opened-- > 1)
      res += str[c];
    cout << "For : " << str[c] << " " << opened << endl;
  }
  return res;
}

int main()
{
  string s = "(()())(())";

  string result = rotate(s);

  for (auto i : result)
  {
    cout << i;
  }

  return 0;
}
