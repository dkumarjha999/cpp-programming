#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	}

	int smallOutput1 = fib(n - 1);
	int smallOutput2 = fib(n - 2);
	int term=smallOutput1 + smallOutput2;
	//cout<<"\n"<<term<<"\n";
	return term;
}

int main() {
int n;
cout<<"Enter a number \n";
cin>>n;
	cout << fib(n) << endl;
}

