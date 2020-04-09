#include<bits/stdc++.h>
using namespace std;

void g(int const & a) {
	// a++; not allowed bc a is a constant int 
}

void f(const int * p) {
//  (*p)++; not allowed bc p is a pointer to a constant
}

int main() {
	int const i = 10;

	int const * p = &i;

	int j = 12;
	int* p3 = &j;
	f(p3);
	g(j);

	int const * p2 = &j;
	cout << *p2 << endl;
	j++;
	cout << *p2 << endl;


}

