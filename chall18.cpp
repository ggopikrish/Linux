#include<bits/stdc++.h>
using namespace std;


int main(void)
{

	int t,n,k,a[1010],c;
	cin>>t;
	while(t--)
	{   
		cin>>n>>k;
		c=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]<=0)c++;
		}
		if(c<k)cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}