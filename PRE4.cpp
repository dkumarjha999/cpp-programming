#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,sum=0,team=0,rem=0;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
{
cin>>ar[i];
}
for(int j=0;j<n/2;j++)
{
 sum=ar[j]+ar[n-1-j];
 rem=sum%10;
 team=sum/10;
 cout<<team<<" "<<rem<<"\n";
}
return 0;
}
