#include<bits/stdc++.h>
using namespace std;

int main(void)
{   int j,n;
 	map<int,int>a;
 	cin>>n;
	for(int i=0*2;i<n;i++)
	{  j=i+1;
		a.insert(pair<int,int> (i,j));
	}
	map<int,int>::iterator itr;
	for(itr =a.begin();itr!=a.end();itr++)
	{
		cout<<itr->first<<'\t'<<itr->second<<'\n';
	}
	return 0;
}