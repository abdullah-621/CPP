#include <iostream>
using namespace std;

void bubble_sort(int *arr, int n)
{
  // todo : Just see how its call
  
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  // todo : base case

  if (n == 1 || n == 0)
  {
    return;
  }

  // todo : Solve just one case

  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      swap(arr[i], arr[i + 1]);
    }
  }

    // todo : Recursive call

  bubble_sort(arr, n - 1);
}
int main()
{
  int arr[] = {5, 4, 3, 2, 1};
  bubble_sort(arr, 5);
  
  for (int i : arr)
  {
    cout <<i <<" ";
  }
  return 0;
}
