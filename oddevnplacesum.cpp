#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Ente n \n";
    cin>>n;
    int sum1=0,sum2=0,num;
    for(int i=0;i<n;i++){
    	 cout<<"Ente num \n";
        cin>>num;
        if(num%2==0&&i%2==0){
            sum1+=num;
        }
        
        if(num%2==1&&i%2==1){
            sum2+=num;
        }
    }
    cout<<sum1<<" "<<sum2; 
	return 0;
}

