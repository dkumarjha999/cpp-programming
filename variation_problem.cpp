#include<bits/stdc++.h>
using namespace std;

long int variation_count(int arr[],int n,int k){

long int count=0;
int i=0,j=1;
 sort(arr,arr+n); // sorting array 
 
 while(j<n){
	if((arr[j]-arr[i])>=k){
		count+=n-j;	// computing total count
		 i++;
		}
		
	 else{
	       j++;
	 	}
		
	}
  return count;

 }

int main(){
int n,k;
long int count=0;
cout<<"Enter n , k \n";
cin>>n>>k;
int ar[n];
cout<<"Enter "<<n<<" elements of array\n";
for(int i=0;i<n;i++){
cin>>ar[i];
}
count=variation_count(ar,n,k);
cout<<"total number of variation is = \n";
cout<<count<<endl;
return 0;
}
