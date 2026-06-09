#include <iostream>
#include <stack>
#include <climits>

using namespace std;

int main()
{
  stack<int> q;

  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  cout << "Enter elements: ";

  for (int i = 0; i < n; i++)
  {
    int nums;
    cin >> nums;
    q.push(nums);
  }

  int max = INT_MIN;
  stack<int> q1;

  // Step 1: Find the maximum element and copy all elements to q1
  while (!q.empty())
  {
    if (q.top() > max)
    {
      max = q.top();
    }
    q1.push(q.top());
    q.pop();
  }

  // Step 2: Rebuild the original stack q without the largest element
  bool largestRemoved = false;
  while (!q1.empty())
  {
    if (q1.top() == max )
    {
      // Remove the largest element (only once)
      largestRemoved = true;
    }
    else
    {
      // Push the element back into q
      q.push(q1.top());
    }
    q1.pop();
  }

  // Output the stack after removal of the largest element
  cout << "Stack after removing largest element: ";
  while (!q.empty())
  {
    cout << q.top() << " ";
    q.pop();
  }
  cout << endl;

  return 0;
}
