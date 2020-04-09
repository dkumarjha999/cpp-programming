#include<bits/stdc++.h>
using namespace std;
# define ll long int

bool check(ll val,ll sumarr[],ll dist){

   if(val-(sumarr[dist])>=0){   // if difference in value>=dist
     return true; 
    }
  return false;
}

int main(){
ll n;
cin>>n;
ll ar[n];
ll sumar[n];
ll sum=0;
for(int i=0;i<n;i++){
	cin>>ar[i];
	sum+=ar[i];   // finding comulative frequency to get increasing order of value so that we can apply binary search
	sumar[i]=sum;
	}

	
	
for(ll i=0;i<n;i++){
cout<<sumar[i]<<" ";
}
cout<<"\n\n";



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
		
		
		/*
		
	else{
		ll mid=0;
		for(ll i=0;i<n;i++){
		    if(sumar[i]<=x){
		      mid+=1;
		     }
		  }
	
	      /*
		ll index=0,start=0,end=n-1,mid=0,ans=0;
		while(start<=end){
		mid=start+(end-start)/2;   these much conditions are not needed for printing output check below
		 if(check(sumar,x,mid)){
		 	start=mid+1;
                        ans=mid;
                                //check here if sumar[ans]==x then break the loop and print answer 
		 	}
		 else{  
		 	end=mid-1;
		 	}   	
		   
	  	}
	  	
	  	
	  	if((sumar[mid]-x)>=0){
	  		cout<<mid<<" "<<x-sumar[mid-1]<<endl;   these conditions are not needed
	  		}

	  	else{
	  		cout<<mid+1<<" "<<x-sumar[mid]<<endl;
	  		}

		}
		*/
		
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
