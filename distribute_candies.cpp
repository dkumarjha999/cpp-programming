#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;   // my code ** handle candies =0 is imp  this is also working fine  
#define MAX 1000000000

bool check(ll per,ll arr[],ll n,ll candies){

    ll count=0;  // for arrangement of candies
    if(candies==0)      // if zero candies it is alyays true
        return true;
  for(ll i=0;i<n;i++){
      ll temp=(arr[i]/candies);
   	if(temp>=1){   // if div values>1 
    	 count+=temp;
    	}
   	 if(count>=per){
    	 return true; 
    	}
  }
  return false;
}

int main(){
ll t;
cin>>t;
while(t--){
    ll n,per;
    cin>>n>>per;
    ll arr[n];
    for(int i=0;i<n;i++){
	cin>>arr[i];
	}	
    sort(arr,arr+n);
/*

for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<"\n\n";

*/

    
    
  ll ans=0;  // to print maximum possible candies but initial valiues as 0
  ll start=0;
  ll end=*max_element(arr, arr + n);  // you can use MAX this is **imp to get maxm elemnt of array  hare we have to get maximum element
					// not the maximum index
    while(start<=end){
        ll mid=start+(end-start)/2;
         if(check(per,arr,n,mid)){
         	ans=mid;
       		start=mid+1;
    		 }	
     	else{
     		 end=mid-1;
    		 }
    		   
  	     }
  //cout<<ans<<endl;
    cout<<ans<<endl;
    }

return 0;
}
