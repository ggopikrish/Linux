#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	long long s,n,m,a[1020],b[1020],flag=0,c[1020]={0},k=0;
	cin>>s>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[k]=a[i]+b[j];
            k++;

        }
    }
    sort(c,c+k);
   // for(int i=0;i<k;i++)cout<<c[i]<<'\t';
    for(int i=k-1;i>=0;i--)
    {
        //if(c[i]<=s)cout<<c[i];flag=1;break;
        // cout<<c[i];
         if(c[i]<=s)
         {
            cout<<c[i];
            flag=1;
            break;
         }
     
    }
   // cout<<'\n'<<flag;
    if(flag==0)cout<<"-1";
    return 0;
}