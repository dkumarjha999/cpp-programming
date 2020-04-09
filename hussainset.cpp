#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
int n,m;
cin>>n>>m;
ll arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}

sort(arr,arr+n);

queue<ll> q;
int countm=0;
int endptr=n-1;

while(m--){
int currm;
cin>>currm;
ll ans;
for(;countm<currm;countm++)
{
if(endptr>=0 &&(q.empty()||(arr[endptr]>=q.front()))){
   ans=arr[endptr];
   endptr--;
 }
 else{
  ans=q.front();
  q.pop();
 }
 q.push(ans/2);
 }
 cout<<ans<<endl;
}
return 0;
}



