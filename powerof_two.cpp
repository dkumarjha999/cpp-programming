#include<bits/stdc++.h>
using namespace std;


int main()
{
int n;
cin>>n;
if(n&n-1){    // because n&n-1=000000
  cout<<"Not Power of 2\n";
 }
else{
   cout<<"power of 2\n";
 }

return 0;
}
