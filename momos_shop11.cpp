#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(ll val,ll sumarr[],ll dist){

   if(val-(sumarr[dist])>=0){   // if difference in value>=dist
     return true; 
    }
  return false;
}

int main(){
ll n;
cin>>n;
ll ar;
ll sumar[n];
ll sum=0;
for(int i=0;i<n;i++){
	cin>>ar;
	sum+=ar;   // finding comulative frequency to get increasing order of value so that we can apply binary search
	sumar[i]=sum;
	}

ll q;
cin>>q;
while(q--){
	ll x;
	cin>>x;
	if(sumar[n-1]<=x){
		cout<<n<<" "<<(x-sumar[n-1])<<endl;
		}
	else if(x<sumar[0]){
		cout<<"0"<<" "<<x<<endl;
		}
	else{
		ll start=0;
		ll end=n-1;

		ll ans=-1;  // to print maximum possible distance
		while(start<=end){
		   ll mid=start+(end-start)/2;
		     if(check(x,sumar,mid)){
		      ans=mid;
                      if(sumar[ans]==x){
                         break;
                         }
		      start=mid+1;
		     }
		     else{
		      end=mid-1;
		     }  
		  }

	  	cout<<ans+1<<" "<<x-sumar[ans]<<endl;
	  	}
	 }
return 0;
}
