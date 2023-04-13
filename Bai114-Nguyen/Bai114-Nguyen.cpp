#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int Tim_doan(int[], int, int, int);

int main()
{
	int a[] = { 8,-8,9,6,-5,7,9,0 };
	int x = -8, y = 5;
	cout<<Tim_doan(a, 8, x, y);
	return 0;
}

int Tim_doan(int a[], int n, int x, int y) {
	if (n == 1) {
		if (a[0]<y && a[0]>x) {
			return a[0];
		}
		return x;
	}
	int lc = Tim_doan(a, n - 1, x, y);
	if (lc == x && a[n - 1] > x && a[n - 1] < y) {
		return a[n - 1];
	}
	return lc;
}