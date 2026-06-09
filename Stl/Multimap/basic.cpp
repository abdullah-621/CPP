#include<iostream>
#include<map>
using namespace std;
int main(){

  multimap<string, int> mm;

  mm.emplace("TV", 10);
  mm.emplace("TV", 50);
  mm.emplace("TV", 70);
  mm.emplace("TV", 90);

  mm.erase(mm.find("TV"));

  for (auto i : mm)
  {
    cout << i.first << "=" << i.second << endl;
  }
  
  return 0;
}