#include <bits/stdc++.h>
using namespace std;

int count(int n){
    if(n == 0){
        return 0;
    }
    int smallAns = count(n / 10);
    return smallAns + 1;
}



int main()
{
int n;
cout<<"Enter a number \n";
cin>>n;
int result=count(n);
cout<<"\n"<<result<<"\n\n";

return 0;
}
