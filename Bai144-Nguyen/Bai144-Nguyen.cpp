#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int kt_tinh_chat(int[], int);
bool kt_hoan_thien(int n);

int main()
{
	int a[] = { 8,-8,9,6,-5,7,9,0 };
	int x = -8, y = 5;
	cout << kt_tinh_chat(a, 8);
	return 0;
}

int kt_tinh_chat(int a[], int n) {
	if (n == 1) {
		if (kt_hoan_thien(a[0]) && a[0]>256) {
			return 0;
		}
		return 1;
	}
	int lc = kt_tinh_chat(a, n - 1);
	if (lc == 0) {
		return lc;
	}
	if (kt_hoan_thien(a[n - 1]) && a[n - 1] > 256) {
		lc = 0;
	}
	return lc;
}

bool kt_hoan_thien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s += i;

	if (s == n)
		return true;
	return false;
}