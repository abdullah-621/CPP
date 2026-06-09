
// #include <iostream>
// #include <vector>
// using namespace std;
// void move(vector<int> &arr, int n)
// {

//   vector<int> temp;
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] != 0)
//     {
//       temp.push_back(arr[i]);
//     }
//   }

//   for (int i = 0; i < n; i++)
//   {
//     if (i < temp.size())
//     {
//       arr[i] = temp[i];
//     }
//     else
//     {
//       arr[i] = 0;
//     }
//   }
// }
// int main()
// {
//   vector<int> arr = {1, 0, 3, 0, 5, 0, 7};
//   move(arr, 7);
//   for (int i : arr)
//   {
//     cout << i << " ";
//   }
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// void move(vector<int> &arr, int n)
// {
//   if (n <= 1)
//   {
//     return;
//   }

//   for (int i = 0; i < n - 1; i++)
//   {
//     if (arr[i] == 0)
//     {
//       swap(arr[i], arr[i + 1]);
//     }
//   }
//   move(arr, n - 1);
// }
// int main()
// {
//   vector<int> arr = {1, 0, 3, 0, 5, 0, 7};
//   move(arr, 7);
//   for (int i : arr)
//   {
//     cout << i << " ";
//   }
// }
#include <iostream>
#include <vector>
using namespace std;
void move(vector<int> &arr, int n)
{
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
    {
      if (arr[j] == 0)
      {
        swap(arr[i], arr[j]);
      }
      j++;
    }
  }
}
int main()
{
  vector<int> arr = {1, 0, 3, 0, 5, 0, 7};
  move(arr, 7);
  for (int i : arr)
  {
    cout << i << " ";
  }
}