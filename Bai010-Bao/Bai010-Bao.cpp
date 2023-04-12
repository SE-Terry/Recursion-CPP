#include <iostream>
using namespace std;

int Tong(int);

int main()
{
	int k;
	cout << "Nhap so nguyen: ";
	cin >> k;
	int kq = Tong(k);
	cout << "Tong la: " << kq;
	return 1;
}

int Tong(int n)
{
	if (n == 0)
		return 0;
	return (Tong(n - 1) + n * n * n);
}