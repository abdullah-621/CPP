#include <bits/stdc++.h>
using namespace std;
void stack_reverse(stack<int>&stk){

  if(!stk.empty()){
    cout << stk.top() << " ";
    stk.pop();
    stack_reverse(stk);
  }
    
}

int main()
{

  stack<int> stk;
  stk.push(3);
  stk.push(2);
  stk.push(1);
  stk.push(7);
  stk.push(6);

  stack_reverse(stk);

  // while (!stk.empty())
  // {
  //   cout << stk.top() << " ";
  //   stk.pop();
  // }
  

  return 0;
}