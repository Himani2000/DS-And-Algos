#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int a,b,c,d,e;
    cin>>s;
    if(s[8]=='P')
      {
          a=s[0]-'0';
          b=s[1]-'0';
          c=(a*10+b)+12;
          if(c==24)
            c=12;
          d=c%10;
          e=c/10;
          s[0]=e+'0';
          s[1]=d+'0';
          s[8]=' ';
          s[9]=' ';
      cout<<s;
      }
     else if(s[8]=='A')
     {
         a=s[0]-'0';
          b=s[1]-'0';
          c=(a*10+b)+12;
          if(c==24)
          {s[8]='P';
           c=00;
          d=c%10;
          e=c/10;
          s[0]=e+'0';
          s[1]=d+'0';
          s[8]=' ';
          s[9]=' ';
      cout<<s;}
    else
    {s[8]=' ';
          s[9]=' ';
        cout<<s;
     }
     }

}

