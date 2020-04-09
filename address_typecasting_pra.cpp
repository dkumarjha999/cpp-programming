#include<bits/stdc++.h>
using namespace std;

/*

int main()
{

int d = 65;
int i = d;
char ch = i;
cout << ch << endl;


return 0;
}

*/

void updateValue(int *p){
    *p = 610 % 255;
}

int main(){
    char ch = 'A';
    updateValue((int*)&ch);
    cout << ch;
}
