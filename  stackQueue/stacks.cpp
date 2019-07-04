#include<iostream>
using namespace std;
class node{
 int data;
 node *next;
 public:
 node(int d)
 {
   data=d;
   next=NULL;
 
 }
 friend  class stack;
};
class stack{
  node *head;
  public:
  stack(){
   head=NULL;
  }
  void push(int d)
  {
  // lets do insertion at the front 
  node *n=new node(d);
  n->next=head;
  head=n;
  }
  
  void pop()
  {
     if(head==NULL) return;
     node *temp=head;
     temp=head;
     head=head->next;
     delete  temp;
  
  }
  bool isempty()
  {
   if(head==NULL) return true;
   else return false;
  }
  int top()
  {
   if(head==NULL) return -1;  else return head->data;
  
  }
  
  void show()
  {
    node *temp=head;
    while(temp!=NULL)
    { cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl;
  
  }
  
  
};
int main(){
 stack s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.show();
 s.pop();
 s.show();
 
}

