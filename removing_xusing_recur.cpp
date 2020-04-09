#include<bits/stdc++.h>
using namespace std;

void removex(char s[]){  // let s=xxab
if(s[0]=='\0'){
return;
}

if(s[0]!='x'){
removex(s+1);
}

else{
int i=1;
for(;s[i]!='\0';i++){   
 s[i-1]=s[i];
  }
  s[i-1]=s[i]; // for copying null character too
  removex(s);
 }
   // this time s=xab 
}



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

cout<<str<<endl;
int len=length(str);
 cout<<len<<endl;

removex(str);
cout<<str<<endl;

int len1=length(str);
 cout<<len1<<endl;

return 0;
}
