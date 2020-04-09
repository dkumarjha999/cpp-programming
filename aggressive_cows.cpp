#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(int cows,ll arr[],int n,ll dist){
  int count=1;  // for arrangement of cows
  ll last_position=arr[0];
  for(int i=0;i<n;i++){
   if((arr[i]-last_position)>=dist){   // if difference in value>=dist
     last_position=arr[i];
     count++;
    }
    if(count==cows){
     return true; 
    }
  }
  return false;

}

int main(){
int t;
cin>>t;
while(t--){
int n,c;
cin>>n>>c;
ll position[n];
for(int i=0;i<n;i++){
cin>>position[i];
}
sort(position,position+n);

ll start=position[0];
ll end=position[n-1]-start;

ll ans=-1;  // to print maximum possible distance
while(start<=end){
   ll mid=start+(end-start)/2;
     if(check(c,position,n,mid)){
      ans=mid;
      end=mid-1;
     }
     else{
      start=mid+1;
     }  
  }
  cout<<ans<<endl;
}


return 0;
}
