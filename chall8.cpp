#include<bits/stdc++.h>
using namespace std;
 
 int main(void)
 { int v,date,month=9;
   long year;
   cin>>year;
   if(year%400==0 || (year%4==0 && year%100!=0)||year=1700||year=1800||year=1900)
   {
            v=244;
            date=256-v;;
            cout<<date<<'.'<<'0'<<month<<'.'<<year;

   }
   else
   {
   	 v=243;
   	 date=256-v;
   	 cout<<date<<'.'<<'0'<<month<<'.'<<year;
   }
   return 0;

 }
