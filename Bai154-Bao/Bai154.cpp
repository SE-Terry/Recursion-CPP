#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void SapGiam(int[], int);
void Xuat(int[], int);

int main()
{
	int* a = new int[100];
	int n;
	Nhap(a, n);
	SapGiam(a, n);
	Xuat(a, n);
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

void SapGiam(int a[], int n)
{
	if (n == 0)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] < a[n - 1])
			swap(a[i], a[n - 1]);
	SapGiam(a, n - 1);
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(5);
}