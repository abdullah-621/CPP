#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{

  // priority_queue<int> pq;     // Decending Order

  priority_queue<int, vector<int>, greater<int>> pq; // Ascending Order

  pq.push(10);
  pq.push(3);
  pq.push(8);
  pq.push(4);
  cout << pq.top() << endl;

  while (!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
}