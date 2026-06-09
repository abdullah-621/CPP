#include <iostream>
using namespace std;

int sum_of_array(int arr[], int n)
{

  if (n == 0)
    return 0;
  if (n == 1)
    return arr[0];

  int sum = 0;
  sum = arr[0] + sum_of_array(arr + 1, n - 1);

  return sum;
}
int main()
{

  int arr[] = {1, 2, 3, 4, 5};

  int sum = sum_of_array(arr, 5);
  cout << sum << endl;

  return 0;
}