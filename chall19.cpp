#include<bits/stdc++.h>
using namespace std;

int main(void)
{
   long long i,j,k,a[200000],digit,rev=0,n;
   cin>>i>>j>>k;
   for(int s=i;s<=j;s++)
   {
        n=s;
     do
     {   
         digit = n % 10;
         rev = (rev * 10) + digit;
         n= n / 10;
     } while (n != 0);
     cout<<rev<<'\n';

   }
   	return 0;

}