#include <iostream>
#include <iomanip>

using namespace std;

int DemGiaTri(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int DemGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	if (abs(a[n - 1] % 10) == 5)
		dem++;
	return dem;
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
	int Dem= DemGiaTri(b, k);
	cout << "So luong gia tri co chu so tan cung la 5:  " << Dem;
	return 1;
}