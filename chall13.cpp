#include<bits/stdc++.h>
using namespace std;


int main(void)
{ int q,x,y,z,a,b;
	cin>>q;
	while(q--)
	{
		cin>>x>>y>>z;
       a=z-x;
       b=z-y;
       if(abs(a)<abs(b))cout<<"Cat A";
       else if(abs(b)<abs(a))cout<<"Cat B";
       else cout<<"Mouse C";

	}
	return 0;
   
}