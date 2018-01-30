#include<bits/stdc++.h>
using namespace std;

int main(void)
{
   int h[26],max;
   string s;
   for(int i='a';i<='z';i++)cin>>h[i];
   	cin>>s;
   max=h[s[0]];
   for(int i=0;i<s.length();i++)
   {
          if(h[s[i]]>max)max=h[s[i]];
         

   }
   cout<<(max*s.length());
   	return 0;

}