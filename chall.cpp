#include<bits/stdc++.h>
using namespace std;
#define size 100
int main(void)
{
	int n,g[size],h[size],v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
         cin>>g[i];
         h[i]=g[i];
	}
	for(int i=0;i<n;i++)
	{
           while(1)
           {  if(g[i]<38){break;}
           	  if(g[i]%5==0)
           	  {
                 v=g[i]-h[i];
                 if(v>=3)
                 {
                    g[i]=h[i];
                   break;  }
                   else if(v<3) break;
           	  }
           	  g[i]=g[i]+1;
           }

	}
	//cout<<"Answer";
	for(int i=0;i<n;i++)cout<<g[i]<<'\n';

   return 0;
}
