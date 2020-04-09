#include <bits/stdc++.h>
using namespace std;


int allIndexes(int input[], int size, int x, int output[]){
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */

 static int q=0,t=0;
 
 static bool found=false;
 if(input[0]==x) {
 	output[q]=t++;
	//return q;
	q++;
	found=true;
  }
  
else if(size==1 && x==input[0]){
	  found=true;
	  output[q]=t;
	  q++;
	 // return t;
}

 else if(found==false && size==0){
 return -1;
 }
 else if(found ==true &&size==0){
 int &j=output[0];
 return j;
 }

else{
t++;
}
	

 int  iffound = allIndexes(input + 1, size - 1,x,output);
 return iffound;
 


}


int main() {
int ar1[5]={1,2,1,4,1};
int ar[5];
    int num =allIndexes(ar1,5,1,ar);
   cout<<num<<"\n";
}
