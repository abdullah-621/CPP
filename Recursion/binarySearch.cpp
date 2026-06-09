#include <iostream>
#include <vector>
using namespace std;
int find_element(vector<int> &arr, int k, int first, int last)
{
  int mid = (first + last) / 2;

  if (first > last)
    return -1;
  if (k == arr[mid])
    return mid;
  if (k != arr[mid])
    return (mid);

  if (k > arr[mid])
  {
    int index = find_element(arr, k, mid + 1, last);
    return index;
  }
  else
  {
    int index = find_element(arr, k, first, mid - 1);
    return index;
  }
  return -1;
}

// int findFloor(vector<int> &arr, int k,int first,int last)
// {

//   return find_element(arr, k, first, last);
// }

int main()
{
  vector<int> arr = {1, 2, 3, 45, 67, 70};
  int k = 4;
  int find = find_element(arr, k, 0, 6);
  cout << find << endl;
}


// #include <iostream>
// using namespace std;

// void print(int *arr, int first, int last)
// {
//   for (int i = first; i < last; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// int binary_search(int arr[], int first, int last, int key)
// {
//   print(arr, first, last);
//   int mid = (first + last) / 2;

//   // todo : Base Case
//   if (first > last)
//   {
//     return -1;
//   }
//   if (arr[mid] == key)
//   {
//     return mid;
//   }
//   // todo : Base Case

//   if (arr[mid] > key)
//   {
//     return binary_search(arr, first, mid - 1, key);
//   }
//   else
//   {
//     return binary_search(arr, mid + 1, last, key);
//   }

//   return -1;
// }

// int main()
// {

//   int arr[] = {
//       1,
//       34,
//       45,
//       56,
//       67,
//       89,
//       90,
//   };
//   int key;
//   cout << "Enter searching key : ";
//   cin >> key;

//   int first = 0;
//   int last = sizeof(arr) / sizeof(arr[0]);

//   int index = binary_search(arr, first, last, key);

//   if (index != -1)
//   {
//     cout << endl
//          << "Index is : " << index << endl
//          << endl;
//   }
//   else
//   {
//     cout << endl
//          << "Data not found" << endl
//          << endl;
//   }

//   return 0;
// }

