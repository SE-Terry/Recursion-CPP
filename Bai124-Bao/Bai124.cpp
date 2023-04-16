#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int NguyenToCuoiCung(int[], int);
bool KtNguyenTo(int);

int main()
{
	int* a = new int[100];
	int n;
	Nhap(a, n);
	int kq = NguyenToCuoiCung(a, n);
	cout << "So nguyen to cuoi cung la: " << kq;
	delete[]a;
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}

int NguyenToCuoiCung(int a[], int n)
{
	if (n == 0)
		return 0;
	if (KtNguyenTo(a[n - 1]))
		return a[n - 1];
	return NguyenToCuoiCung(a, n - 1);
}

bool KtNguyenTo(int x)
{
	int dem = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}