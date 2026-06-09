// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// int main()
// {

//   vector<int> temperatures = {8, 2, 9, 6, 12, 13, 1, 16, 2, 0};

//   int n = temperatures.size();
//   vector<int> ans(n, -1);

//   stack<int> st;

//   for (int i = 0; i < n; i++)
//   {
//     if (st.empty())
//     {
//       st.push(i);
//     }
//     else
//     {
//       while (!st.empty() && temperatures[i] > temperatures[st.top()])
//       {
//         ans[st.top()] = temperatures[i];
//         st.pop();
//       }
//       st.push(i);
//     }
//   }

//   for (int i : ans)
//   {
//     cout << i << " ";
//   }
//   return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int c = true;

  cout << c << endl;

  return 0;
}