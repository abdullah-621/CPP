#include <iostream>
#include <deque>
using namespace std;
int main()
{

  deque<int> D = {1,2,3,4,5};

  D[0] = 30;
  D.push_back(10);
  D.push_front(20);
  D.pop_back();
  D.pop_front();
  cout << D.front() << endl;
  cout << D.back();

for (int i = 0; i < D.size(); i++)
{
  cout << D[i] << endl;
}


  return 0;
}