// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//   // vector<int> vec(5,10);

//   // vec.push_back(1);
//   // vec.push_back(2);
//   // vec.push_back(3);
//   // vec.push_back(3);
//   // vec.pop_back();

//   vector<int> vec1 = {1,2,3,4};

//   // vector<int> vec2(vec1);

//   for (int i = vec1.size() - 1; i >= 0; i--)
//   {
//     cout << vec1[i] << " ";
//   }

//   // cout << endl
//   //      << "Size:" << vec.size() << endl;
//   // cout << "Capacity:" << vec.capacity() << endl;

//   // cout << "Font:" << vec.front() << endl;
//   // cout << "back:" << vec.back();
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

  int T;
  cin >> T;

  while (T--)
  {
    int N, M;
    cin >> N >> M;

    vector<int> types(N);
    for (int i = 0; i < N; i++)
    {
      cin >> types[i];
    }

    vector<int> wants(M);
    for (int i = 0; i < M; i++)
    {
      cin >> types[i];
    }

    int sad_count = 0;

    for (int i = 0; i < wants.size() - 1; i++)
    {
      int dev = wants[i] - 1;
      if (types[dev] > 0)
      {
        types[dev]--;
      }
      else
      {
        sad_count++;
      }
        }

    cout << sad_count << endl;
  }
}
