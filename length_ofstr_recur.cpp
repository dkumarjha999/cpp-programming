#include<bits/stdc++.h>
using namespace std;

int length(char s[]){

if(s[0]=='\0'){
  return 0;
 }
 
 int smallstr_length=length(s+1);
 return 1+smallstr_length;

}


int main()
{

char str[100];
cin>>str;

int len=length(str);

cout<<len<<endl;

return 0;
}
