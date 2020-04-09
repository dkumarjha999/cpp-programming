#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
	if (n == 0) {   // base case 
		return 1;
	}
	int smallOutput = factorial(n - 1); // induction hypothesis
	
	int output = n * smallOutput;          // induction step
	return output;
}

int main() {
	cout << factorial(4) << endl;
}

