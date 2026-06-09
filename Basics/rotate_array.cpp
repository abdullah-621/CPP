// #include <iostream>
// #include <vector>
// using namespace std;
// void rotate(vector<int> &arr, int n,int key)
// {
//   if (key == 0)
//   {
//     return;
//   }
  
//   int temp = arr[n - 1];

//   for (int i = n; i > 1; i--)
//   {
//     arr[i - 1] = arr[i - 2];
//   }
//   arr[0] = temp;

//   rotate(arr, n, key - 1);
// }
// int main()
// {
//   vector<int> arr = {1,2,3,4,5,6,7};
//   int key;
//   cin >> key;
  
//   rotate(arr, 7,key);
//   for(int i : arr){
//     cout << i << " ";
//   }
// }
#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int> &arr, int n,int key)
{
  if (key == 0)
  {
    return;
  }
  
  int temp = arr[0];

  for (int i = 0; i < n; i++)
  {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;

  rotate(arr, n, key - 1);
}
int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  int key;
  cin >> key;
  for (int i : arr)
  {
    cout << i << " ";
  }
  cout << endl;
  rotate(arr, 7,key);
  for(int i : arr){
    cout << i << " ";
  }
}