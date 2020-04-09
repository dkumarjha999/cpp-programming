#include <bits/stdc++.h>
using namespace std;

int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
 static int t=0;
 
 static bool found=false;
 if(input[0]==x) {
	return t;
	found=true;
  }
  
else if(size==1 && x==input[0]){
	  found=true;
	  return t;
}

 else if(found==false && size==0){
 return -1;
 }

else{
t++;
}
	

 int  iffound = firstIndex(input + 1, size - 1,x);
 return iffound;
 


}


int main() {
int ar1[5]={1,2,3,4,5};
    int num =firstIndex(ar1,5,3);
   cout<<num<<"\n";
}
