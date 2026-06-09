#include <iostream>
using namespace std;
struct stack
{
public:
  int *arr;
  int size;
  int top;

public:
  stack(int s)
  {
    size = s;
    top = -1;
    arr = new int[s];
  }

  void push(int value)
  {

    if (top == size - 1)
    {
      cout << "Stack Overlfow" << endl;
    }
    else
    {
      top++;
      arr[top] = value;
      cout << "Pushed " << value << " into ths stack" << endl;
    }
  }

  void pop()
  {
    if (top == -1)
    {
      cout << "Stack Underflow" << endl;
      return;
    }
    else
    {
      cout << "Pop " << arr[top] << " into ths stack" << endl;
      top--;
    }
  }

  int pick()
  {

    if (top == -1)
    {
      cout << "Stack Underflow";
      return -1;
    }
    else
    {
      return arr[top];
    }
  }

  bool isEmpty()
  {
    return top == -1;
  }

  int isSize()
  {
    return top + 1;
  }
};

int main()
{

  int arr[7] = {1, 2, 3, 4, 5, 6, 7};

  stack s(5);

  for (int i = 0; i < sizeof(arr) / sizeof(1); i++)
  {
    s.push(arr[i]);
  }

  return 0;
}
