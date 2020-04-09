#include<bits/stdc++.h>
using namespace std;

void increment1(int **p)
{
p=p+1;
}

void increment2(int **p)
{
*p=*p+1;
}

void increment3(int **p)
{
**p=**p+1;
}


int main()
{
int i=10;
int *p=&i;
int **p2=&p;

cout<<p2<<"\t"<<&p<<"\n";
cout<<p<<"\t"<<*p2<<"\t"<<&i<<"\n";
cout<<i<<*p<<**p2<<"\n";

cout<<i<<"\t"<<*p<<"\t"<<**p2<<"\n";
cout<<&i<<"\t"<<p<<"\t"<<*p2<<"\n";

increment1(p2);
cout<<i<<"\t"<<*p<<"\t"<<**p2<<"\n";
cout<<&i<<"\t"<<p<<"\t"<<*p2<<"\n";

// check also by commenting increment2(p2)
increment2(p2);
cout<<i<<"\t"<<*p<<"\t"<<**p2<<"\n";
cout<<&i<<"\t"<<p<<"\t"<<*p2<<"\n";

increment3(p2);
cout<<i<<"\t"<<*p<<"\t"<<**p2<<"\n";
cout<<&i<<"\t"<<p<<"\t"<<*p2<<"\n";

return 0;

}
