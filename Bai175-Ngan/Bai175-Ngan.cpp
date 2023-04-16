#include <iostream>
#include <iomanip>

using namespace std;

void MotVeDau(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

void MotVeDau(int a[], int n)
{
	if (n == 0)
		return;
	if (a[n - 1] != 1)
	{
		MotVeDau(a, n - 1);
		return;
	}
	for (int i=0;i<=n-2;i++)
		if (a[i] != 1)
		{
			swap(a[n - 1], a[i]);
			break;
		}
	MotVeDau(a, n - 1);
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
	cout << "Mang ban dau la: ";
	Xuat(b, k);
	MotVeDau(b, k);
	cout << "\nMang luc sau la: ";
	Xuat(b, k);
	return 1;
}