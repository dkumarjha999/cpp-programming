#include<bits/stdc++.h>
using namespace std;

int balancedBTs(int h) {

  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return the output and don’t print it.
  */
 int m=pow(10,9)+7;
  if(h==0 || h==1){
   return 1;
    }
   int x=balancedBTs(h-1);
   int y=balancedBTs(h-2);
     
   long res1=(long)x*x;
   long res2=(long)2*x*y;
   
    int count1=(int)(res1 % m);
    int count2=(int)(res2 % m);
    
    int ans=(count1+count2)%m;
    
   return ans;
    
}

int main() {
    int h;
    cin >> h;
    int ans = balancedBTs(h);
    cout << ans << endl;
}

