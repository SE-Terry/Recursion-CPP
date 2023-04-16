#include <iostream>
using namespace std;

int TongChuSo(int);

int main()
{
	int k;
	cout << "Nhap so nguyen: ";
	cin >> k;
	int kq = TongChuSo(k);
	cout << "Tong cac chu so la: " << kq;
	return 1;
}

int TongChuSo(int n)
{
	n = abs(n);
	if (n == 0)
		return 0;
	int dv = n % 10;
	return (TongChuSo(n / 10) + dv);
}