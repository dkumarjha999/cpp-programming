#include <bits/stdc++.h>
using namespace std;

bool checkNumber(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
if(size==1){
int val=(size ==1 && x==input[0])?true:false;
	    return val;
}	

	if (input[0]==x) {
		return true;
	}
	bool isSmallerfound = checkNumber(input + 1, size - 1,x);
	return isSmallerfound;

}


int main() {
int ar1[5]={1,2,3,4,5};
    bool num =checkNumber(ar1,5,1);
   cout<<num<<"\n";
}
