// #include <iostream>
// #include <vector>
// using namespace std;
// int getSecondLargest(vector<int> &arr)
// {
//   int max = arr[0];
//   int smax = arr[0];
//   int same = -1;

//   for (int i = 0; i < arr.size() - 1; i++)
//   {
//     if (arr[i] == arr[i + 1])
//     {
//       same = -1;
//     }
//   }

//   for (int i = 0; i < arr.size(); i++)
//   {
//     if (arr[i] > max)
//     {
//       max = arr[i];
//     }
//   }
//   for (int i = 0; i < arr.size() - 1; i++)
//   {
//     if (arr[i] != max && arr[i] > smax)
//     {
//       smax = arr[i];
//     }
//   }
//   cout << max << endl;
//   if (smax != max)
//   {
//     return smax;
//   }
//   else
//   {
//     return same;
//   }
// }
// int main()
// {
//   vector<int> arr = {1, 2, 3, 4, 5};
//   int get = getSecondLargest(arr);
//   cout << get << endl;

//   int max = INT16_MIN;
//   int min = max;

//   cout << min << endl;
// }
#include <iostream>
#include <vector>
using namespace std;
int getSecondLargest(vector<int> &arr)
{

  if (arr.size() < 2)
  {
    return -1;
  }

  int max = INT32_MIN;
  int smax = INT32_MIN;

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > max)
    {
      smax = max;
      max = arr[i];
    }

    else if (arr[i] > smax && arr[i] < max)
    {
      smax = arr[i];
    }
  }

  if (smax == INT32_MIN)
  {
    return -1;
  }
  

  return smax;
}
int main()
{
  vector<int> arr = {1,1,1,1,1};
  int get = getSecondLargest(arr);
  cout << get << endl;
}