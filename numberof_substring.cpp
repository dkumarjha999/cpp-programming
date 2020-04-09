#include<bits/stdc++.h>
using namespace std;
int substring(string input,string output[]){
if(input.empty()){   // if input string is empty 
 output[0]="";  // copy "" empty string in output array
 return 1;  // returning substring length as 1
}
string smallstr=input.substr(1);   // taking all char from 1st char
int smalloutputsize=substring(smallstr,output);
for(int i=0;i<smalloutputsize;i++){
   output[smalloutputsize+i]=input[0]+output[i]; //concatinate 0th char with
 				// previous sybstrings   
 }			
 return 2*smalloutputsize;  // returning size of all substrings
 }


int main()
{

string str;
cin>>str;
int len=str.size();
cout<<str<<endl;
int numof_substr=pow(2,len);
cout<<"possible substring is = "<<numof_substr<<"\n";
string substr[numof_substr];
int num=substring(str,substr);
if(num==numof_substr){
cout<<"all substrings are \n";
 for(int i=0;i<num;i++){
  cout<<substr[i]<<endl;
 }
}
else{
 cout<<"Error \n";
}
return 0;
}
