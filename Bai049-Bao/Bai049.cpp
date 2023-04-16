#include <iostream>
using namespace std;

int Tinh(int);

int main()
{
	int k;
	cout << "Nhap so nguyen: ";
	cin >> k;
	int kq = Tinh(k);
	cout << "So hang thu "<< k << " : " << kq;
	return 1;
}

int Tinh(int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 2;
	return (4 * Tinh(n - 1) + Tinh(n - 2));
}