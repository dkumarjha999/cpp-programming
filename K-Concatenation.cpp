#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll kadane(int arr[],int n)  // kadane algorithm 
{
ll cur_sum=0;
ll max_so_far=INT_MIN;
for(int i=0;i<n;i++)
{
cur_sum=cur_sum+arr[i];
if(max_so_far<cur_sum)
{
max_so_far=cur_sum;
}

if(cur_sum<0){
cur_sum=0;
}
}
return max_so_far;
}

ll max_subarraysum(int arr[],int n,int k){     // for getting max sum 

ll kadanes_sum=kadane(arr,n);
if(k==1){
return kadanes_sum;
}

ll cur_prefix_sum=0, cur_suffix_sum=0;

ll max_prefix_sum=INT_MIN,max_suffix_sum=INT_MIN;

for(int i=0;i<n;i++){       // for getting max_prefix_sum
cur_prefix_sum=cur_prefix_sum+arr[i];
max_prefix_sum=max(cur_prefix_sum,max_prefix_sum);
}

ll totalsum=cur_prefix_sum;

for(int i=n-1;i>=0;i--){    // // for getting max_suffix_sum
cur_suffix_sum=cur_suffix_sum+arr[i];
max_suffix_sum=max(max_suffix_sum,cur_suffix_sum);
}

ll ans;

if(totalsum<0){
ans=max(max_suffix_sum+max_prefix_sum,kadanes_sum);
}

else{
ans=max(max_suffix_sum+max_prefix_sum+(totalsum*(k-2)),kadanes_sum);
}
return ans;
}

int main()
{
int T;
cin>>T;
while(T--){
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<max_subarraysum(arr,n,k)<<endl;
}

return 0;
}
