#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,max=0,min=0,pr1=0,pr2=0,pr3=0,pr4=0,t=0;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
{
cin>>ar[i];
}
for(int j=0;j<n;j++)
{
 min=ar[j];
for(int k=j+1;k<n;k++)
 {
  pr1=ar[k]-min;
  if(pr2<pr1)
  {
  pr2=pr1;
  }
 }
 pr3=pr2;
 if(pr4<pr3)
 {
  pr4=pr3;
 }
 
}
cout<<pr4;
return 0;
}
