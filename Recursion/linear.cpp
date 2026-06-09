#include <iostream>
using namespace std;

void print(int arr[],int size){
  cout << "Size of the array : " << size <<endl;

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

bool linearsearch(int arr[], int size, int key)
{

  print(arr, size);

  if (size == 0)
    return false;

  if (arr[0] == key)
  {
    return true;
  }
  else
  {
    bool remainingPart = linearsearch(arr + 1, size - 1, key);
    
    return remainingPart;
  }
}
int main()
{

  int arr[] = {1, 2, 3, 4, 5};

  int key = 4;

  bool find = linearsearch(arr, 5, key);

  if (find)
  {
    cout << key <<  " is Present";
  }
  else{
    cout << key << " is Not present";
  }

  return 0;
}