#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

void Liet_ke(int a[], int n);

int main()
{
	int a[5] = { 1,2,3,4,5 };
	Liet_ke(a, 5);
	return 0;
}

void Liet_ke(int a[], int n) {
	if (n == 1) {
		return;
	}
	for (int i = 0; i <= n - 2; ++i) {
		cout << a[n - 1] <<" " << a[i] <<"    " << a[i] << " " << a[n - 1];
		cout << endl;
	}
	Liet_ke(a, n - 1);
}