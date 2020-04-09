#include<bits/stdc++.h>
using namespace std;

int num_code(int *input,int size){
if(size==1){
	return 1;
 	}
if(size==0){
	return 1;
	}
	
int output=num_code(input,size-1);
 if(input[size-2]*10+input[size-1]<=26){
 	  output+=num_code(input,size-2);
 	}
 	
   return output;			
 }


int main()
{
  int t;
  cin>>t;
  while(t--){
    int size;
    cin>>size;
    int input[size];
    for(int i=0;i<size;i++){
      cin>>input[i];
        }
      if(input[0]!=0){
      
          int result= num_code(input,size);
           cout<<result<<"\n\n";
          } 
      else
          {
            break;
          	}
     }
return 0;
}
