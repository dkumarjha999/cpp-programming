#include <bits/stdc++.h>
using namespace std;

int powerfun(int x,int n){
 cout<<x<<"\t"<<n<<"\n";
   if(n==0){
    return 1;
   }
  int output=x*powerfun(x,n-1);
   return output;
}


int main()
{

int x,n;
cout<<"Enter base and power \n";
cin>>x>>n;
int result=powerfun(x,n);
cout<<"\n"<<result<<"\n";

return 0;
}
