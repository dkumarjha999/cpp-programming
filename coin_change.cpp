#include <bits/stdc++.h>
using namespace std;

int coin_change(int n,int *d,int numD , int ** output){
if(n==0)   // no rupees 
  {return 1;}
  
  if(n<0)         // n becomes negative then we cant give change 
    {return 0;}
  
 if(numD==0)  // nothing to give the change
   {return 0;} 
  
  if(output[n][numD]>-1){     // returning value if repeatition is there
     return output[n][numD];
    }  
   
  int first=coin_change(n-d[0],d,numD,output);  // decreasing rupees only not the array 
  
  int second=coin_change(n,d+1,numD-1,output);
  
  output[n][numD]=first+second;  // storing in array for using if repeatation
  return first+second;
}

int main()
{
int n;
cin>>n;

int numD;
cin>>numD;

int * denomination= new int[numD];
for(int i=0;i<numD;i++){
	cin>>denomination[i];
	}

int** output = new int*[n+1];     // allocating 2d array to store output
for(int i = 0; i < n+1; i++)
    output[i] = new int[numD+1];
    

for(int i=0;i<n+1;i++){
	for(int j=0;j<numD+1;j++){
		output[i][j]=-1;
		}
	}	
	
int result=coin_change(n,denomination,numD,output);
cout<<result<<"\n\n";

for(int i=0;i<n+1;i++){
	delete []output[i];    // deleting pointer to each row
	}
delete [] output;  // deleting double pointer to output	

delete [] denomination;  // deleting denomination array
	

return 0;
}
