#include<iostream>
using namespace std;
int main()
{
    long long  n;
    long long  i;
    long long  maxi=0;
    long  long count=0;
    cin>>n;
    long long *a=new long long[n];
    for(i=0;i<n;i++)
        cin>>a[i];
     for(i=0;i<n;i++)
     {
         if(a[i]>maxi)
         {
             maxi=a[i];
         }
     }
     for(i=0;i<n;i++)
     {
         if(maxi==a[i])
            count++;
     }
     cout<<count;
}

