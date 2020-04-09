#include <bits/stdc++.h> 
using namespace std; 

char* uniqueChar(char *str){
    // Write your code here
    
    set<char>s;
    int i=0;
    int len1=0;
    set<char>::iterator it;
    for(;str[i]!='\0';i++){
    cout<<str[i]<<" ";
     s.insert(str[i]);
     len1++;
    }
    cout<<endl;
    int len=s.size();
    char *s1 = new char[len+1];
    int j=0;
    for(int i=0; i<len1;i++){
    auto it=s.find(str[i]);
    if(it!=s.end()){
		s1[j]=*it;
                  j++;
		  s.erase(it);
		}
     cout<<*it<<" ";
      
    }
    cout<<endl;
   return (s1);
}


/*

char* uniqueChar(char *str){
  //string Ans="";
    
	int t=0;
	while(str[t]!='\0'){  // finding length of string  
		++t;
	}
    char *chararray = new char[t+1];  // creating new array 
	set<char>p;  // set for only one char
	for(int i=0; i<t; i++){
		p.insert(str[i]); // inserting all char one by one
	}
    int j = 0;
	for(int i=0; i<t;i++){
	   auto	it=p.find(str[i]);  // storing string in its original order
		if(it!=p.end()){
			chararray[j++] = *it;
			p.erase(it);
		}
	}
   
	return chararray;

}

*/
  
int main() 
{ 
    string str;
    
    //cout<<"Enter a string\n";
    cin>>str;
    int len=str.length();
    char st[len];
    for(int i=0;i<str.length();i++){
    st[i]=str[i];
    }
    // cout<<"\n\n";
    int i=0;
    char* res=uniqueChar(st);
     for(;res[i]!='\0';i++){
      cout<<res[i];
     }
     cout<<"\n\n";
     
 return 0;
}  
