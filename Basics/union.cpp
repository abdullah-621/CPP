// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<int> union_array(vector<int> &arr, vector<int> &brr)
// {

//   vector<int> result;

//   for (int i = 0; i < arr.size(); i++)
//   {
//     result.push_back(arr[i]);
//     result.push_back(brr[i]);
//   }

//   sort(result.begin(), result.end());

//   unique(result);
//   return result;
// }

// int main()
// {
//   vector<int> arr = {1, 2, 3, 4, 5};
//   vector<int> brr = {3, 4, 5, 6, 7, 8};

//   vector<int> result = union_array(arr, brr);

//   for (auto i : result)
//   {
//     cout << i << " ";
//   }
//   return 0;
// }