#include<iostream>
#include<stack>
using namespace std;

void show(stack<int>s)
{
  while(s.empty()!=true)
  {
  
     cout<<s.top()<<" ";
     s.pop();
  
  }



}




int main()
{
  stack<int>s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  show(s);
  

}
