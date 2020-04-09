#include <bits/stdc++.h>
using namespace std;
/*

int func(int num){
    return func(num- 1);
}

int main() {
    int num = 5;
    int ans = func(num - 1);
    cout << ans;
}
*/


/*
output

Solution Description
Since the base case is missing in the code, therefore there will be infinite recursion calls and hence runtime error will occur.

*/

/*

void print(int n){
    if(n < 0){
        return;
    }
    cout << n << " ";
    print(n - 2);
}

int main() {
    int num = 5;
    print(num);
}

*/

/*


void print(int n){
    if(n < 0){
        return;
    }
    if(n == 0){
        cout << n <<" ";
        return;
    }
    print(n --);
    cout << n <<" ";
}

int main() {
    int num = 3;
    print(num);
}

*/
/*

output

Solution Description
In function print when recursion call is being made n-- is being passed as input.
 Here we are using post decrement operator, so argument passed to next function call is n and not n - 1.
 Thus there will be infinite recursion calls and runtime error will come.

*/






















