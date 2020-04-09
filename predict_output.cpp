#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    if(~0 == 1) {
        cout << "yes";
    }
    else {
        cout << "no";
    }


return 0;
}
*/

/*
int main(){
    int y = 0;
    if(1 | (y = 1)) {
        cout << "y is " << y;
    }
    else {
        cout << y;
    }
}

*/

int main(){
    int y = 1;
    if(y & (y = 2)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
