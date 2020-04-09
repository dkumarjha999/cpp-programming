#include<bits/stdc++.h>
using namespace std;

int countWaysToMakeChange(int denominations[], int numDenominations, int value){  
    
 
  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
    
   if(value==0){     // no rupees
       return 1;
   }
    
   if(value<0){    // rupees become -ve we cant give change
       return 0; 
   }
    
   if(numDenominations==0)    // nothing to give the change
   {
       return 0;
   }
    
    int first=countWaysToMakeChange(denominations,numDenominations,value-denominations[0]);   // decreasing rupees
    
    int second=countWaysToMakeChange(denominations+1,numDenominations-1,value);   // decreasing array size
    return first+second;

}


int main(){

  int numDenominations;
  cin >> numDenominations;
  int* denominations = new int[numDenominations];
  for(int i = 0; i < numDenominations; i++){
    cin >> denominations[i];
  }
  int value;
  cin >> value;

  cout << countWaysToMakeChange(denominations, numDenominations, value);

}

