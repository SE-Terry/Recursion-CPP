#include <iostream>
#include <cmath>
using namespace std;

float TinhAn(int);

int main()
{
	int k;
	cout << "Nhap so nguyen: ";
	cin >> k;
	float kq = TinhAn(k);
	cout << "Tong la: " << kq;
	return 1;
}

float TinhAn(int n)
{
	if (n == 1)
		return 2;
	float at = TinhAn(n - 1);
	return (5 * at + sqrt(24 * at * at - 8));
}