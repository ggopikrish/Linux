#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	long long n,k,h[100],max,a,b[10000],c=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>h[i];

	for(int i=0;i<n;i++)
	{
		if(h[i]>k)
		{   b[i]=h[i]-k;
			c++;
			
			
		}
	}
    if(c==0)
    {
    	cout<<"0";
    }
    else
    {   max=b[0];
    	for(int i=0;i<c;i++)
    	{
    		if(max<b[i])max=b[i];
    		

    	}
    	cout<<max;
    }

	return 0;
}