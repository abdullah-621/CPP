#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

int main() {
  string s = "abbaca";

  map<char, int> freq;

  for (char ch : s)
  {
    freq[ch]++;
  }

  s.clear();

  for (auto it : freq)
  {
    s.push_back(it.first);
  }

  cout << s;
  return 0;
}