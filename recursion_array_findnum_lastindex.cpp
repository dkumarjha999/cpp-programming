#include <bits/stdc++.h>
using namespace std;

int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
 static int p=0,q=0,t=0;
 
 static bool found=false;
 if(input[0]==x) {
 	p=t++;
	//return q;
	found=true;
  }
  
else if(size==1 && x==input[0]){
	  found=true;
	  q=t;
	 // return t;
}

 else if(found==false && size==0){
 return -1;
 }
 else if(found ==true &&(q>p)&&size==0){
 return q;
 }
 
  else if(found ==true &&(p>q)&&size==0){
 return p;
 }

else{
t++;
}
	

 int  iffound = lastIndex(input + 1, size - 1,x);
 return iffound;
 


}


int main() {
int ar1[5]={1,2,1,4,1};
    int num =lastIndex(ar1,5,1);
   cout<<num<<"\n";
}
