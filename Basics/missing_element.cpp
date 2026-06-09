// #include <iostream>
// #include <vector>
// using namespace std;
// int search(vector<int> &nums, int n)
// {
//   int miss = false;
//   for (int i = 1; i <= nums.size(); i++)
//   {
//     for (int j = 0; j < nums.size(); j++)
//     {
//       if (nums[j] != i)
//       {
//         miss = false;
//       }
//       else
//       {
//         miss = true;
//         break;
//       }
//     }
//     if (miss == false)
//     {
//       return i;
//     }
//   }
// }

// int main()
// {
//   vector<int> arr = {1, 2, 3, 4, 0};
//   cout << search(arr, 5);

//   return 0;
// }
#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &nums, int n)
{
  int sum_Of_all = (n * (n + 1)) / 2;

  int sum_n = 0;

  for (int i = 0; i < n; i++)
  {
    sum_n += i;
  }

  return sum_Of_all - sum_n;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 0};
  cout << search(arr, 5);

  return 0;
}