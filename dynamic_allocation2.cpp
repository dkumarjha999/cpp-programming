#include <bits/stdc++.h>
using namespace std;

int main() {

	int *p = new int;
	delete p;

	p = new int;
	delete p;

	p = new int[100];
	delete [] p;

	/*
	
	DYNAMIC MEMORY CREATION IN HEAP SO PROGRAM MAY CRASH DUE TO IN SUFFICIENT MEMORY 
	
	
	while (true) {
		int *p = new int;
		*p=22;
		cout<<*p;
	}
     STATIC MEMORY CREATION STACK MEMORY AND IT WILL BE DELETED AUTOMATICALLY ONCE SCOPE OF VARIABLE IS END
	while (true) {
		int i = 10;
		cout<<i;
	}

     */

}

