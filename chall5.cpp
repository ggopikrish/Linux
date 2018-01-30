#include<bits/stdc++.h>
using namespace std;


int main(void)
{    
   	long long a[1000],n,c1,c2,g,h;
   	cin>>n;
   	c1=0;
   	c2=0;
   	for(int i=0;i<n;i++)cin>>a[i];
     g=a[0];
     h=a[0];
     
   	 for(int j=1;j<n;j++)
   	 {  if(g!=a[j])
   	 	{
   	 	if(g<a[j])
   	 	{
   	 		g=a[j];
   	 		c1++;
   	 	}
   	 	else if(h>a[j])
   	 	{
   	 		h=a[j];
   	 		c2++;
   	 	}
   	 }

   	 }
   	 cout<<c1<<" "<<c2;
	return 0;
}