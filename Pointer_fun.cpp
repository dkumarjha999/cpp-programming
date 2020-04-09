#include<bits/stdc++.h>
using namespace std;

void print(int *p)
{
cout<<*p;
}

void incrementpointer(int *p)
{
p=p+1;
}

void incrementval(int *p)
{
(*p)++;
}

int main()
{
int i=10;
int *p=&i;
cout<<&i<<"\n";
cout<<i<<"\t";
print(p);
cout<<"\n"<<p<<"\n";
incrementpointer(p);
cout<<p<<"\n";

cout<<*p<<"\n";
incrementval(p);
cout<<*p<<"\n";
return 0;
 
}

/*
outputs

0x7fffda95f20c
10	10
0x7fffda95f20c
0x7fffda95f20c
10
11

*/
