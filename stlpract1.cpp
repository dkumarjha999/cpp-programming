#include<bits/stdc++.h>
using namespace std;

int main()
{
//vector <int> v(5);

// vector <int>v;
// vector <int>::iterator it;
// for(int i=0;i<5;i++){
// v.push_back(i+1);
//}

//for(it=v.begin();it!=v.end();it++)
//{
//cout<<*it<<endl;
//}

// string 

// string s="deepak";
// cout<<s<<endl;
// string s1(s,2,4);  // from index 2 copy 4 char in s1
// cout<<s1<<endl;
// string s2=s.substr(2,4);
// cout<<s2<<endl;

// if(s1.compare(s2)==0){
// cout<<s1<<" is equal to "<<s2<<endl;
// }

// pair utility class


// string s;
// getline(cin,s);
// cout<<s.length();
// for(int i=0;i<s.length();i++){
// if(s[i]==ch)
// {
//  continue;
// }
// else{
// cout<<s[i];
// }

// }
// vector<string>vect;

// set is inside set class

// set<int>s;
// int ar[]={1,2,3,4,5,6,5};
// for(int i=0;i<7;i++){
// s.insert(ar[i]);
// }

// set<int>::iterator it;
// for(it=s.begin();it!=s.end();it++){
// cout<<*it<<endl;
// }

// if(s.find(5)==s.end()){
// cout<<" 5 is found"<<endl;
// }
// else{
// cout<<" 5 is not found"<<endl;
// }

// map is a key value pair 


int ar[]={1,2,3,4,5,6,5};
map<int,int>m;
for(int i=0;i<7;i++){
m[ar[i]]=m[ar[i]]+1;
}

map<int,int>::iterator it;
for(it=m.begin();it!=m.end();it++){
cout<<it->first<<" "<<it->second<<endl;
}

// unoredered map in avg case take o(1) time

cout<<"\n\n";

int ar1[]={1,2,3,4,5,6,5};
unordered_map<int,int>m1;
for(int i=0;i<7;i++){
m1[ar1[i]]=m1[ar1[i]]+1;
}

unordered_map<int,int>::iterator it1;
for(it1=m1.begin();it1!=m1.end();it1++){
cout<<it1->first<<" "<<it1->second<<endl;
}








return 0;
}
