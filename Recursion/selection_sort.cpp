#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{

  if (n == 0 || n == 1)
  {
    return;
  }

  for (int i = 0; i < n - 1; i++)
  {
    int mini = i;
    if (arr[mini] > arr[mini + 1])
    {
      mini = mini + 1;
    }
    swap(arr[mini], arr[mini + 1]);
    selection_sort(arr + 1, n);
  }
}

int main()
{
  int n = 5;
  int arr[] = {5, 4, 3, 2, 1};

  selection_sort(arr, n);

  for (int i : arr)
  {
    cout << i << " ";
  }
}