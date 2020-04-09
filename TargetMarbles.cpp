#include<bits/stdc++.h>
using namespace std;

int main()
{
bool pr=false,tr=false;
int n,sum=0,target;
cin>>n>>target;
int ar[n];
for(int i=0;i<n;i++)
{
cin>>ar[i];
}
for(int p=0;p<n;p++){
sum=0;
 for(int j=p;j<n;j++)
 {
  sum+=ar[j];
  if(sum==target)
  {
   if(tr==false)
   {
     pr=true;
     tr=true;
     cout<<"true\n";
     for(int k=p;k<=j;k++)
     {
     cout<<ar[k]<<" ";
     }
     
     break;
    }
   }
  }
 } 
if(pr==false)
{
 cout<<"false\n";
 }
return 0;
}
