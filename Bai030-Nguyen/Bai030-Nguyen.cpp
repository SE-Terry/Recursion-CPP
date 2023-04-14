#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float S(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\nKet qua cua S(" << n << ") la:	" << setw(5) << setprecision(5) << S(n) << endl;
	return 0;
}

float S(int n) {
	if (n == 1) {
		return 2;
	}
	return S(n - 1) + 2 * n + 1;
}