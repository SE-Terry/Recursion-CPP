#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

void xay_dung(int a[], int n, int b[], int& k);
 
int main()
{
	int a[7] = { 1,5,2,4,7,4,9 };
	int b[7];
	int k = 0;
	xay_dung(a, 7, b, k);
	for (int i = 0; i < k; ++i) {
		cout << b[i] << " ";
	}
	return 0;
}

void xay_dung(int a[], int n, int b[], int& k) {
	if (n == 1) {
		if (a[0] % 2 == 1) {
			b[k++] = a[0];
		}
		return;
	}
	xay_dung(a, n-1, b, k);
	if (a[n-1] % 2 == 1) {
		b[k++] = a[n-1];
	}
	return;
}