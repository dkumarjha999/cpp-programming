#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    string str;
    cout<<"enter line \n";
    getline(cin,str);
    
      map<string,int>m;
    // Used to split string around spaces. 
    istringstream ss(str); 
  
    // Traverse through all words 
    do { 
        // Read a word 
        string word; 
        ss >> word; 
        
         m[word]=m[word]+1; 
         
        // While there is more to read 
    } while (ss); 
    
   //  cout<<"\n\n";
    
    map<string,int>::iterator it;
  //  for(it=m.begin();it!=m.end();it++){
   // cout<<it->first<<" "<<it->second<<endl;
  // }
  
   int p2=0;
   
  for(it=m.begin();it!=m.end();it++){
   if(it->second>=2){
     p2+=1;
     }
    }
    
    if(p2==0){
     cout<<"-1"<<endl;
     return 0;
     }
     
    for(it=m.begin();it!=m.end();it++){
    if(it->second>=2 && p2>=1){
     cout<<it->first<<" "<<it->second<<endl;
     }
    }
    return 0; 
} 
