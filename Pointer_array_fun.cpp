#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int size)
{
int ans=0;
for(int i=0;i<size;i++)
{
ans+=a[i];
}
return ans;
}


int sumar(int *a,int size)
{
int ans=0;
for(int i=0;i<size;i++)
{
ans+=a[i];
}
return ans;
}


int main()
{
int ar[5]={2,3,1,5,6};
cout<<sizeof(ar)<<"\n";
cout<<sum(ar,5)<<"\n";
cout<<sumar(ar+2,3)<<"\n";

return 0;

}

/*

output 
size of array  20
sum of all 5 elements 17
sum of elements from ar[2] to ar[4] 12


*/

