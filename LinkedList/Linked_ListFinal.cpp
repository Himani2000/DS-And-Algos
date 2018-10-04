#include<iostream>
using namespace std;
class node{
private:
    int data;
    node *next;
public:
    node(int d)
    {
        data=d;
        next=NULL;

    }
 friend class Linked_List;
};
class Linked_List
{
private:
    node *head;
public:
    Linked_List()
    {
        head=NULL;
    }
 void insertatbeg(int d)
    {
        node *n=new node(d);
        n->next=head;
        head=n;

    }
void insertatend(int d)
{
    node *t=head;
    node *n=new node(d);
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=n;


}
void insertatK(int d,int k)
{
    node *n=new node(d);
    node *t=head;
    int cnt=1;
    while(head==NULL ||  k==1)
    {
        insertatbeg(d);
        return;
    }
    while(t->next!=NULL &&  cnt<k-1)
    {

        t=t->next;
        cnt++;
    }
    n->next=t->next;
    t->next=n;
}

void delatbeg()
{
    if(head==NULL)
    {
        cout<<"no nodes left"<<endl;
        return;
    }
    node*t=head;
    head=t->next;
    t->next=NULL;
    delete t;
}
void delatend()
{
    node *t=head;
    node *temp=NULL;
    while(t->next!=NULL)
    {
        temp=t;
        t=t->next;
    }
    temp->next=NULL;
    delete t;
}
void delatK(int k)
{
    int cnt=1;
    node *t=head;
    node *temp=NULL;
    while(t->next!=NULL && cnt<k)
    {
        temp=t;
        t=t->next;
        cnt++;
    }
    temp->next=t->next;
    delete t;


}
    void print()
    {
        node *t=head;
        while(t!=NULL)
        {
            cout<<t->data<<" ->";
            t=t->next;

        }
        cout<<endl;

    }
    void Reverse()
    {
        node *cur=head,*prev=NULL,*nxt;
        while(cur!=NULL)
        {
            nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        head=prev;

    }

};
int main()
{
    Linked_List ll;
    int d,c;
    char choice;
    ll.insertatbeg(1);
    ll.insertatbeg(2);
    ll.insertatbeg(3);
    ll.print();
    ll.insertatend(4);
    ll.print();
    ll.insertatK(5,1);
    ll.print();
    ll.delatbeg();
    ll.print();
    ll.delatend();
    ll.print();
    ll.delatK(2);
    ll.print();
    ll.insertatbeg(1);
    ll.insertatbeg(2);
    ll.insertatbeg(3);
    ll.print();
    ll.Reverse();
    ll.print();





   /*do{
    cout<<"MENU"<<endl;
    cout<<"1.insert at beg"<<endl;
    cout<<"2.insert at end "<<endl;
    cout<<"3.insert at any given k"<<endl;
    cin>>c;
    switch(c)
    {
    case 1:cin>>d;
           ll.insertatbeg(d);
           ll.print();
           break;

    case 2:cin>>d;
           ll.insertatend(d);
           ll.print();
           break;



    case 3:cout<<"ddf";

    case 4:
           ll.print();
           break;

    }
    cout<<"want to  continue  "<<endl;
    cin>>choice;
   }while(choice!='n');
*/

}
