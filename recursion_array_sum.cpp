#include <bits/stdc++.h>
using namespace std;

int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if(n==0)
    {
        return 0;
    }
    
    int sum1=input[0]+sum(input+1,n-1);
    return sum1;
}


int main() {
int ar1[5]={1,2,3,4,5};
    int num =sum(ar1,5);
   cout<<num<<"\n";
}
