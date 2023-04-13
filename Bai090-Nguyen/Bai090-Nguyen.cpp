#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int Tong_doi_xung(int[], int);
bool kt_doi_xung(int);

int main()
{
	int a[] = { 8,-8,6,-5,-7,9,0 };
	cout<<Tong_doi_xung(a, 7);
	return 0;
}

int Tong_doi_xung(int a[], int n) {
	if (n == 0) {
		return 0;
	}
	int s = Tong_doi_xung(a, n - 1);
	if (kt_doi_xung(a[n - 1])) {
		return s + a[n - 1];
	}
	return s;
}

bool kt_doi_xung(int n) {
	n = abs(n);
	int a[100];
	int index = 0;
	while (n > 0) {
		int dv = n % 10;
		a[index++] = dv;
		n = n / 10;
	}
	for (int i = 0, j = n; i < j; ++i, --j) {
		if (a[i] != a[j]) {
			return false;
		}
	}
	return true;
}