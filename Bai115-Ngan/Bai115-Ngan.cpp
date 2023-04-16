#include <iostream>
#include <iomanip>

using namespace std;

int ChanCuoi(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int ChanCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (a[n - 1] % 2 == 0)
		return a[n - 1];
	return ChanCuoi(a, n - 1);
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	int kq = ChanCuoi(b, k);
	if (kq == -1)
		cout << "Mang khong co gia tri chan.";
	else
		cout << "So chan cuoi cung la: " << kq;
	return 1;
}