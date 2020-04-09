#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
	cout << n << endl;
	if (n == 0) {
		return 1;
	}
	int smallOutput = factorial(n - 1);
	return n * smallOutput;
}

int main() {
	int n;
	cout<<" Enter a number \n";
	cin >> n;
	int output = factorial(n);
	cout<<"factorial is \n"
	cout << output << endl;
}

