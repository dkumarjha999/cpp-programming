#include <bits/stdc++.h>
using namespace std;

int main() {
	int i = 10;
	int j = 21;
	int const * p = &i;

	p = &j;

	int * const p2 = &i;
	(*p2)++;
	//p2 = &j; not allowed 


	int const * const p3 = &i;
	// p3 = &j; not allowed bc p3 is a constant pointer
	//(*p3)++; not allowed bc p3 is a pointer to constant
}

