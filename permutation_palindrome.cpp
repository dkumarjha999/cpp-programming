#include<bits/stdc++.h>
using namespace std;

char getchar(int i){
return (char)(i+97);
}

void printpalindromestring(string s)
{
map<char,vector<int>> indexmap;

for(int i=0;i<s.length();i++){
indexmap[s[i]].push_back(i);
}
int odd_freqcount=0;
for(int i=0;i<26;i++){
 if((indexmap[getchar(i)].size()%2)!=0){
   odd_freqcount++;
  }
}
if(odd_freqcount>=2){
 cout<<"-1";
 return;
 }
 int ans[s.length()];
 int start=0;
 int end=s.length()-1;
 
 for(int i=0;i<26;i++){
   
   char curchar=getchar(i);
 
 for(int j=0;j<indexmap[curchar].size();j+=2){
 
   if(indexmap[curchar].size()-j==1)
     {
     ans[s.length()/2]=indexmap[curchar][j]; // handling middle element in odd case
      continue;
     }
     ans[start]=indexmap[curchar][j];
     ans[end]=indexmap[curchar][j+1];
     start++;
     end--;   
  }
  
 }
 
 for(int i=0;i<s.length();i++){
   cout<<ans[i]+1<<" ";
 }

 return;
}


int main()
{
int t;
cin>>t;
while(t--){
string s;
cin>>s;
printpalindromestring(s);
cout<<endl;
}

return 0;
}
