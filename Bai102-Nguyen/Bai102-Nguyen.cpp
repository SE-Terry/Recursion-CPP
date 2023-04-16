#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int Lon_nhat(int[], int);
int dem_lon_nhat(int[], int);

int main()
{
	int a[] = { 8,-8,9,6,-5,7,9,0 };
	cout << dem_lon_nhat(a, 8);
	return 0;
}

int Lon_nhat(int a[], int n) {
	if (n == 0) {
		return a[0];
	}
	int lc = Lon_nhat(a, n - 1);
	if (a[n-1]>lc) {
		return a[n-1];
	}
	return lc;
}

int dem_lon_nhat(int a[], int n) {
	if (n == 0) {
		return 0;
	}
	int lc = Lon_nhat(a, n - 1);
	if (a[n - 1] > lc) {
		return 1;
	}
	int dem = dem_lon_nhat(a, n - 1);
	if (a[n - 1] == lc) {
		return dem+1;
	}
	return dem;
}
