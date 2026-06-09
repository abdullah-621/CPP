#include <iostream>
#include <map>
using namespace std;
int main()
{

  map<string, int> m;

  m["Laptop"] = 20;
  m["Mobile"] = 40;
  m["headphone"] = 50;
  m["headphone"] = 60; // headphone get a new value
  m["Apple"] = 30;
  m["watch"] = 20;

  m.insert({"Books", 50});
  m.emplace("pen", 50);

  m.erase("watch");

  for (auto i : m)
  {
    cout << i.first << " = " << i.second << endl;
  }

  cout << "Count:" << m.count("Apple") << endl;
  cout << "Count Value:" << m["Apple"] << endl;

  if (m.find("books") != m.end())
  {
    cout << "Found\n";
  }
  else
  {
    cout << "Not Found\n";
  }

  return 0;
}


