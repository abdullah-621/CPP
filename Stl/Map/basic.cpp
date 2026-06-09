#include <iostream>
#include <map>
using namespace std;
int main()
{

  map<string, int, greater<string>> maps = {{"Amasum", 621}, {"Cshafi", 721}, {"Bnoman", 821}};

  // cout << "masum :" << maps["masum"] << endl;

  // maps["Rakib"] = 731;         // adding element
  // maps.insert({"ruhul", 989}); // adding element

  // cout << "size : " << maps.size() << endl;

  // cout << "count item : " << maps.count("masum") << endl;
  // cout << "count value : " << maps["masum"] << endl;

  // maps.erase("masum"); // remove perticular element

  // cout << "size after erase :" << maps.size() << endl;

  // maps.clear(); // delete all element

  // cout << "empty or not : " << maps.empty() << endl;

  for (auto i : maps)
  {
    cout << i.first << " = " << i.second << endl;
  }

  return 0;
}