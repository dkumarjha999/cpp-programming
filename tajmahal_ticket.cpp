

/*#include<bits/stdc++.h>
using namespace std;
# define ll long int

int main()
{
int n;
cin>>n;
ll *p=new ll[n];
ll z;
ll min=INT_MIN;
int index;
for(int i=0;i<n;i++){   // this code i had written the mistake was z=p[i]-i then we have to check different values of z
 cin>>p[i];
 z=(p[i]-i)/n;
 if(min>z){
   index=i;
 }
}
if((p[index]-index)%n==0){    //  these conditions are not needed once we take all condition we have to return z=i+z*n  then check p[i]-i
  index=index;  
 }
 else{
  index=index+1;
 }
 cout<<index+1<<endl;
return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;
# define ll long int

int main()
{
int n;
cin>>n;
ll *p=new ll[n];
ll z;
ll min=INT_MAX;     // if we initialize min as INT_MIN it will always give z value as 0 while dividing with n ***
int index;
for(int i=0;i<n;i++){
    cin>>p[i];
    z=(p[i]-i);
    
    if(z%n)
        z=z/n+1;
    else
        z=z/n;
    z=i+z*n;
    if(p[i]-i<=0)
        z=0;
    if(min>z){
        min=z;
        index=i;
    }
}
// if((p[index]-index)%n==0){
//   index=index;
//  }
//  else{
//   index=index+1;
//  }
 cout<<index+1<<endl;
return 0;
}
