#include<bits/stdc++.h>
using namespace std;

int main()
{

string a,b;
int n=0,cost=0;
cin>>n;
cin>>a>>b;

for(int i=0;i<n;){

           if(a[i]!=b[i]){
              if(i+1<n && a[i]!=a[i+1] && a[i+1]!=b[i+1]){
                      i+=2;
                          }
               else{
               	       i+=1;
                       }
                       
              cost++;
	  } 
	 else{
	 	i++;
	 
         	}

    }
    
   cout<<cost<<endl;  
  return 0;
}
