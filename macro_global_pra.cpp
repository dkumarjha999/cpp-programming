
#include<bits/stdc++.h>
using namespace std;

/*

int x = 1;

void print(){
    int x = 2;
    {
        int x = 3;
        cout << x << endl;
    }
}
int main(){
    print();
    return 0;
}

*/

/*

#define MULTIPLY(a, b) a*b

int main(){
    cout << MULTIPLY(2+3, 3+5);
    return 0;
}
/*
Solution Description
"MULTIPLY(a, b)" will be replaced by "a*b" in code. 
So, MULTIPLY(2+3, 3+5) will be replaced by 2+3*3+5.
 And according to operator precedence,
  multiply operator (*) has higher precedence than plus operator (+).
   So, 3*3 will be evaluated first. Hence expression will become : 2+9+5 = 16
   
 */  
 
 #define SQUARE(x) x*x

int main(){
    int x = 36 / SQUARE(6);
    cout << x;

    return 0;
}
   
