#include<bits/stdc++.h>
using namespace std;


int main(){
int S,E,W,cel=0,far=0;
    cin>>S>>E>>W;
    far=S;
    while(far<=E)
    {
        cel= (5.0/9)*(far-32);
        cout<<far<<"\t"<<cel<<"\n";
        far=far+W;
    }
  return 0;
}

