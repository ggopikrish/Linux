#include<bits/stdc++.h>
using namespace std;


int main(void)
{
   int n,c[110],v,d[50]={0},co,r=0;
   cin>>n;
   for(int i=0;i<n;i++)cin>>c[i];
   sort(c,c+n);
  v=c[0];
  //for(int i=0;i<n;i++)cout<<c[i];
  for(int i=0;i<n;i++)
  {  co=0;
  	for(int j=0;j<n;j++)
  	{
  		if(v==c[j])
  		{
  			co++;

  		}
  	}
  	if(co%2==0)r++;
  	for(int k=i;k<n;k++)
  	{
  		if(v!=c[k])
  		{
  			v=c[k];
  			break;
  		}
  	}

  }
  cout<<n-r;
  
return 0;

}