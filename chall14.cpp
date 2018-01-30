#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int a[3][3],b[3],sum,v,r=0;
	for(int i=0;i<3;i++)
	{    sum=0;
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
			sum+=a[i][j];
		}
		b[i]=sum;
	}
	for(int i=0;i<3;i++)cout<<b[i]<<'\n';
	for(int i=0;i<3;i++)
	{ 
           if(b[i]!=15)
           {
           	  v=15-b[i];
           	  r+=abs(v);
           }
	}
	
    cout<<r;

      return 0;
	
}