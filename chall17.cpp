#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n,h[65],sp,s,r[100],j,c=0;
	
	cin>>n;
	for(int i=0;i<n;i++)cin>>h[i];

	for(int i=0;i<n;i++)
	{
		if(h[i]==0)
		{
			r[i]=1;
			c++;
		}
		else if(h[i]%2==0)
		{
			r[i]=2*(h[i]/2)+1*(h[i]/2)+1;
			c++;
		}
		else
		{
          sp=0;
          s=-1;
          j=1;
          while(h[i]>j)
          {
          	sp++;
          	s++;

          	j++;
          }
        //  cout<<sp<<s;
          r[i]=2*sp+1*s+1;
          c++;
           
		}

	}
	for(int i=0;i<c;i++)cout<<r[i];
	//cout<<sp<<'\t'<<s;
	
	return 0;	
}