#include <iostream>
using namespace std;

int main()
{
  int M, N;
  cin >> M >> N;

  int total_elements = M * N;
  int half_elements = total_elements / 2;

  int count_zero = 0;

  int arr[M][N];
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> arr[i][j];
      if (arr[i][j] == 0)
      {
        count_zero++;
      }
    }
  }

  if (count_zero >= half_elements)
  {
    cout << "Yes"<<endl;
  }
  else
  {
    cout << "No"<<endl;
  }

  return 0;
}
