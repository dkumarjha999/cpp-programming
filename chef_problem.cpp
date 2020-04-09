#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>>intervals;
	for(int i=0;i<n;i++){
		int start,end;
		cin>>start>>end;
		 // Entering values in vector of pairs 
		intervals.push_back(make_pair(start,end));
		}
	sort(intervals.begin(),intervals.end());
	
	/*
	  // Printing the vector 
  	  for (int i=0; i<n; i++) 
   		 { 
       		 // "first" and "second" are used to access 
        	// 1st and 2nd element of pair respectively 
       		 cout << intervals[i].first << " "<< intervals[i].second << endl; 
    		} 
	
	*/
	
	
	// calculation for printing waiting times
	
	while(m--){
		int curr_time;
		cin>>curr_time;
		
		// here lower_bound function used to give searched pair position which either greater or equal to curr_time give iterator
		int position=lower_bound(intervals.begin(),intervals.end(),make_pair(curr_time,0))
				-intervals.begin();  //subtracting to get position
				
		// when curr_time matches with zeroth position
		
		if(position==0){
			int ans=intervals[0].first-curr_time;
			cout<<ans<<endl;
			}
			
		else{
		        int ans=-1;
		        // comparing with just before this position
		        
		        if(intervals[position-1].second>curr_time){
		         	ans=0;
		        	}
		        	
		          // position lies in intervals 
		         else if(position<intervals.size()){
		         	
		         	ans=intervals[position].first-curr_time;
		         	}
		         // if ans remained -1 that means position lies out of bound
		           cout<<ans<<endl;
		         
			}
		
	  }	
  }



 return 0;
}


