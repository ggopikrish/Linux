#include<bits/stdc++.h>
using namespace std;

int main(void)
{
   int x1,x2,v1,v2;
   string s;
   cin>>x1>>v1>>x2>>v2;
   s="NO";
   for(int i=0;i<=200;i++)
   {
          if(x1==x2)
          {
          	s="YES";
          	break;
          }
          
              x1=x1+v1;
              x2=x2+v2;

    }
    cout<<s;
  return 0;
}