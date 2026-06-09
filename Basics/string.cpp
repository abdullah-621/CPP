#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

bool occurence(string s)
{
  map<char, int> freq;
  for (char c : s)
  {
    freq[c]++;
  }
  for (auto it : freq)
  {
    cout << it.first << " = " << it.second << endl;
  }
  cout << endl;
  int occurences = freq.begin()->second;

  for (auto it : freq)
  {
    if (it.second != occurences)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string s = "abacbc";
  cout << occurence(s) << endl;

  return 0;
}