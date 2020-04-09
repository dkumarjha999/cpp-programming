#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n;
	cout<<"Enter number of row and column\n";
	cin >> m >> n;
	int** p = new int*[m];
	
	for (int i = 0; i < m; i++) {
		p[i] = new int[n];  // we can write new int[i+1] if we have to create an array with unequal numbers of columns
		cout<<" enter "<<n <<" elements for "<<i+1<<" row \n";
		for (int j = 0;j <n; j++) {
			cin >> p[i][j];
		}
	}
	cout<<" array is \n";
	for (int i = 0; i < m; i++) 
		{
		for (int j = 0;j <n; j++) {
			cout<<p[i][j]<<" ";
		    }
		   cout<<"\n";
		}


	for (int i = 0; i < m; i++) {
		delete [] p[i];
	}
	delete [] p;
}


/*

output
 
Enter number of row and column
3
3
 enter 3 elements for 1 row 
1 2 3
 enter 3 elements for 2 row 
4 5 6
 enter 3 elements for 3 row 
6 78
9
 array is 
1 2 3 
4 5 6 
6 78 9 



*/
