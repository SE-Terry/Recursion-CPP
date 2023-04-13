#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Liet_ke(int[], int);

int main()
{
	int a[] = { 8,-8,6,-5,-7,9,0 };
	Liet_ke(a, 7);
	return 0;
}

void Liet_ke(int a[], int n) {
	if (n<=1) {
		return;
	}
	Liet_ke(a, n - 1);
	if (abs(a[n-2])>abs(a[n-1])) {
		cout << a[n - 2] << setw(5);
	}
}
