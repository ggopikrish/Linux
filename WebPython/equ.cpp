#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

int main(void)
{   map <int int> v;map <int ,int>::iterator itr;
	int t,n,a[102],b[10];
	cin>>t;
	while(t--)
	{  cin>>n;
	   for(int i=0;i<n;i++)cin>>a[i];

	   	for(int i=0;i<n;i++)
	   	{
	   		v.insert(pair <int,int> (a[i+1],a[i]+a[i+1]));
	   	}
	   	
	   	for(itr=v.begin();itr!=v.end();++itr)
	   	{
	   		cout<<itr->first<<'\t'<<itr->second	;
	    }
	}

 return 0;   
}