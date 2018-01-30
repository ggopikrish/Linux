#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n,k,c[10000],sum=0,b;
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>c[i];
	c[k]=0;
	cin>>b;
	for (int i = 0; i < n; ++i)
		{
			sum+=c[i];
		}

	if(b==(sum/2))
	{
		cout<<"Bon Appetit";
	}
	else
	{
		cout<<b-(sum/2);
	}	

 	return 0;
}