#include<bits/stdc++.h>
using namespace std;

long long merge(int ar[],int left,int startof_midar,int right){

int i=left,j=startof_midar,k=0;
long long count=0;
int temp[right-left+1];
while(i<startof_midar&&j<=right){
   if(ar[i]<=ar[j]){
     temp[k++]=ar[i++];  // no inversion already sorted shift i=i+1
   }
   else{
    temp[k++]=ar[j++];  // inversion and shift j=j+1
    count+=startof_midar-i;  // number of inversion needed
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
 return count;
 
}


long long merge_sort(int ar[],int left,int right){

long long cnt=0;
if(right>left){
  int mid=(left+right)/2;
  long long cnt_left=merge_sort(ar,left,mid);
  
  long long cnt_right=merge_sort(ar,mid+1,right);
  
  long long my_cnt=merge(ar,left,mid+1,right);
  
  return my_cnt+cnt_right+cnt_left;
 }

 return cnt;

}




long long solve(int ar[],int n){

  long long ans=merge_sort(ar,0,n-1);
  return ans;
} 



int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
 }
long long inver=merge(arr,n);

cout<<inver<<endl;
return 0;
}
