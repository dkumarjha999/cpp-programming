#include <bits/stdc++.h>
using namespace std;

bool is_sorted2(int a[], int size) {
	if (size == 0 || size ==1) {
		return true;
	}

	bool isSmallerOutput = is_sorted2(a + 1, size -1);
	if (!isSmallerOutput) {
		return false;
	}
	if (a[0] > a[1]) {
		return false;
	} else {
		return true;
	}

}

bool is_sorted(int a[], int size) {
	if (size == 0 || size ==1) {
		return true;
	}

	if (a[0] > a[1]) {
		return false;
	}
	bool isSmallerSorted = is_sorted(a + 1, size - 1);
	return isSmallerSorted;
	/*if (isSmallerSorted) {
		return true;
	} else {
		return false;
	}*/
}

int main() {
	int ar1[5]={1,2,4,6,7};
	int ar2[5]={1,2,4,2,8};
	bool s1=is_sorted(ar1,5);
	bool s2=is_sorted2(ar2,5);
	cout<<s1<<"\t"<<s2<<"\n";
	
	return 0;
}

