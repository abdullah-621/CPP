// #include <bits/stdc++.h>
// using namespace std;

// bool check_palindrom(string s, int first, int last)
// {

//   if (first >= last)
//     return true;
//   if (s[first] != s[last])
//     return false;
//   return check_palindrom(s, first + 1, last - 1);
// }

// int main()
// {

//   string s = "abcbad";
//   int size = s.length() - 1;
//   // cout << size;
//   bool palindrom = check_palindrom(s, 0, size);

//   if (palindrom)
//     cout << s << " is Palindrom";
//   else
//     cout << s << " is not palindrom";

//   return 0;
// }

#include <iostream>
    using namespace std;

bool palindrome(int i, string &s)
{

  // Base Condition
  // If i exceeds half of the string means all the elements
  // are compared, we return true.
  if (i >= s.length() / 2)
    return true;

  // If the start is not equal to the end, not the palindrome.
  if (s[i] != s[s.length() - i - 1])
    return false;

  // If both characters are the same, increment i and check start+1 and end-1.
  return palindrome(i + 1, s);
}

int main()
{

  // Example string.
  string s = "madam";
  cout << palindrome(0, s);
  cout << endl;
  return 0;
}