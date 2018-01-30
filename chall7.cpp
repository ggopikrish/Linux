#include<bits/stdc++.h>
using namespace std;


int main(void)
{  long long n,a[200000],b[5]={1,2,3,4,5},v,c[5],co,*k;
  
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
		v=a[0];
		for(int i=0;i<5;i++)
		{     co=0;
			for(int j=0;j<n;j++)
			{   
				if(b[i]==a[j])
				{
					co++;
				}
				
			}
			c[i]=co;
		}
		k=max_element(c,c+5);
		for(int i=0;i<n;i++)
		{
			if(*k==c[i])
			{
				cout<<i+1;
				break;
			}
		}
	return 0;

}