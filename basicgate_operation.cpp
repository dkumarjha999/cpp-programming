#include<bits/stdc++.h>
using namespace std;

int main()
{

int x=4;
int y=5;

int z=x&y;   // bitwise and

int p=x|y;     // bitwise or



int r=~x;    // bitwise not

int s=x^y;      // xor  

int t=x^1;       // x=~x by using xor with 1

int u=x^0;         //  x=x by using xor with 0


cout<<x<<"\n\n";
cout<<y<<"\n\n";

cout<<"by and \t"<<z<<"\n\n";
cout<<"by or \t"<<p<<"\n\n";
cout<<"by not \t"<<r<<"\n\n";
cout<<"by xor \t"<<s<<"\n\n";
cout<<"by ~x  by xor\t"<<s<<"\n\n";
cout<<"by x by xor \t"<<s<<"\n\n";

return 0;
}
