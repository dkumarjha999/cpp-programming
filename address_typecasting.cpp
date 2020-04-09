#include<bits/stdc++.h>
using namespace std;

int main()
{

int i=65;
char c=i;

cout<<i<<"\t"<<c<<"\n";

int *p=&i;
char *pc=(char*)p;

cout<<*p<<"\n";
cout<<*pc<<"\n";

cout<<*p<<"\n";
cout<<pc<<"\n";
cout<<pc+1<<"\n";
cout<<pc+2<<"\n";
cout<<pc+3<<"\n";


return 0;
}

/*

output

65	A
65
A
65
A



*/
