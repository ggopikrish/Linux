#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n,k,a[100],c,v;
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>a[i];
    c=0;
    for(int i=0;i<n;i++)  
    { 
    	for(int j=1;j<n;j++)
    	{  if(i<j)
    		{
             v=a[i]+a[j];
             if(v%k==0){c++;
             	}
             }

    	}
    	
    }      
    cout<<c;
    return 0;


}