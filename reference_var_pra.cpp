#include<bits/stdc++.h>
using namespace std;

/*


void func(int p){
    cout << p << " ";
}

int main(){
    int i = 10;
    int &p = i;
    func(p++);
    cout << i;
}

*/

void func(int i, int& j, int p){
    i++;
    j++;
    p++;
}

int main(){

    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;
    
}
