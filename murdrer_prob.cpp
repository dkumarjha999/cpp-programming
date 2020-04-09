#include<bits/stdc++.h>
using namespace std;

long long merge(int ar[],int left,int startof_midar,int right){

int i=left,j=startof_midar,k=0;
long long sum=0;
int temp[right-left+1];
while(i<startof_midar&&j<=right){
   	if(ar[i]<ar[j]){
    	 temp[k++]=ar[i++];  // no inversion already sorted shift i=i+1
   	}
   	
   else{
    	temp[k++]=ar[j++];  // inversion and shift j=j+1
    	sum+=(right-j+1)*ar[i];   //** here j is important
                   //count+=startof_midar-i;  // number of inversion needed
   	}
 }
 
 while(i<startof_midar){
 temp[k++]=ar[i++];
 	}
 
 while(j<=right){
 temp[k++]=ar[j++];
 	}
 k=0;
 for(int i=left;i<=right;i++){
 ar[i]=temp[k++];   // copying sorted array
 
 }
 return sum;
}


long long merge_sort(int ar[],int left,int right){

long long sum=0;
if(right>left){
  int mid=(left+right)/2;
  long long sum_left=merge_sort(ar,left,mid);
  
  long long sum_right=merge_sort(ar,mid+1,right);
  
  long long my_sum=merge(ar,left,mid+1,right);
  cout<<my_sum<<endl;
  return sum_left+sum_right+my_sum;
 }

 return sum;

}




long long solve(int ar[],int n){

  long long ans=merge_sort(ar,0,n-1);
  return ans;
} 



int main()
{
int t;
cin>>t;
long long ar[t];
int k=0;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
 }
 long long total=solve(arr,n);
// ar[k++]=solve(arr,n);
cout<<total<<endl;
}

for(int i=0;i<t;i++){
cout<<ar[i]<<endl;
}
return 0;
}
