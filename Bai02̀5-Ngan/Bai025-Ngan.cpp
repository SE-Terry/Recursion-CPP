#include <iostream>
#include <cmath>

using namespace std;

int TichSoLe(int);

int TichSoLe(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 != 0)
			return n;
		return 1;
	}
	int T = TichSoLe(n / 10);
	int dv = n % 10;
	if (dv % 2 != 0)
		return T * dv;
	return T;
}

int main()
{
	int k;
	cout << "Nhap n: ";
	cin >> k;

	int kq = TichSoLe(k);
	cout << "T(" << k << ")= " << kq;
	return 1;
}