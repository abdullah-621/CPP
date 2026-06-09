#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{

  stack<int> s;

  s.push(1);
  s.push(2);
  s.push(3);
  s.emplace(4);

  cout << "Top element:" << s.top() << endl;

  cout << "size is:" << s.size() << endl;

  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
  cout << "size is:" << s.size();

  return 0;
}

