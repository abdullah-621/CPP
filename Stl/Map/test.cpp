#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
int main()
{

  string s = "leetcode";

  unordered_map<char, int> freq;

  for (char &ch : s)
  {
    freq[ch]++;
  }

  for (auto &ch : freq)
  {
    cout << ch.first << " = " << ch.second;
    cout << endl;
  }
  cout << endl;

  cout << freq.size() << endl;

  return 0;
}
