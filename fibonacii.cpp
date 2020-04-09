#include<bits/stdc++.h>
using namespace std;
/*

int fib_normal(int n){
if(n==0||n==1){             complexity = 2^n
	return 1;
	}
int result=fib_normal(n-1)+fib_normal(n-2);
return result;
}

*/

int fib_dynamic_prog(int n,long int *arr){
if(n==1||n==0){
  	return 1;
 	}                     // complexity = 2*n
if(arr[n]>0){
	return arr[n];

	} 	
 long int result=fib_dynamic_prog(n-1,arr)+fib_dynamic_prog(n-2,arr);
 
 arr[n]= result;
 return result;
}

int fib_iterative(int n){
 long *ar=new long[n+1];
ar[0]=1;                       //  complexity=n
ar[1]=1;
   for(int i=2;i<=n;i++){
        ar[i]=ar[i-1]+ar[i-2];
  }
  int result=ar[n];
  delete [] ar;
  return result;
}


int main()
{
int n;
cin>>n;
long int arr[n+1];
for(int i=0;i<n+1;i++){
arr[i]=0;
}
cout<<"\n\n";
//cout<<fib_normal(n)<<"\n\n";
cout<<fib_dynamic_prog(n,arr)<<"\n\n";
cout<<fib_iterative(n)<<"\n\n";
return 0;
}
