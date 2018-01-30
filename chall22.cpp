#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int t,n,a[100],b[10],sum,j;
	cin>>t;
	while(t--)
     {
     	cin>>n;
     	sum=0;
     	j=0;
     	for(int i=0;i<n;i++)cin>>a[i];

     	for(int i=0;i<n;i++)
     	{
     		if(a[i]<a[i+1])
     		{
     			sum+=a[i];
     		}
     		else
     		{   
     			a[i+1]=0;
     			i=0;
     			
     		}
     	}
     	//for(int i=0;i<j;i++)cout<<b[i];
     	
     }
     return 0;	
}