#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,num,sum=0;
cout<<" Enter n \n";
cin>>n;
int ar[n][n];
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cin>>ar[i][j];
		if(i==0||j==0||i==n-1||j==n-1||i==j||i+j==n-1){
			sum+=ar[i][j];
			}
		}

	}
	cout<<sum;
return 0;
}

