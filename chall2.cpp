#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{   int apple,orange;
   ll s,t,f1[100000],f2[100000],a,b,m,n;
   apple=0;orange=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i=0;i<m;i++)cin>>f1[i];
    for(int j=0;j<n;j++)cin>>f2[j];
    	for(int i=0;i<m;i++)
    	{   int v;
    		v=a+f1[i];
    		if(v>=s && v<=t)apple++;
             
    	}
    	for(int j=0;j<n;j++)
    	{  int r;
    		r=b+f2[j];
    		if(r>=s && r<=t)orange++;
            
    	}
    	cout<<apple<<'\n'<<orange;
    	return 0;
}