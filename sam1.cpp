#include<bits/stdc++.h>
using namespace std;

int main(void)
{

	int a[5]={10,90,79,10,10},c=0,v;
	v=a[0];
	sort(a,a+5);
	for(int i=0;i<5;i++)
		{  if(v==a[i])
			{
			//cout<<a[i]<<'\t';
				c++;
			}
		}
		cout<<c;
		return 0;
}