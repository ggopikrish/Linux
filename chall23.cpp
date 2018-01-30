#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int t,n,a[100],b[100],sum;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>a[i];

		for(int i=0;i<n;i++)
		{
			sum=a[i]+a[i+1];
			b[a[i+1]]=sum;
			sum=0;
		}
	}
	return 0;
}