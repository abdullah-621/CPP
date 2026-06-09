#include <iostream>
#include <vector>
using namespace std;

std::vector<std::vector<int>> test(int n)
{
  vector<int> temp(n, n);
  vector<std::vector<int>> temp1(n, temp);
  return temp1;
}
int main()
{

  int n;
  cout << "Enter n:";
  cin >> n;

  std::vector<std::vector<int>> result = test(n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ", result[i] [j]);
    }
    cout << endl;
  }

  return 0;
}