#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void DuongTangAmGiam(float[], int);
void Xuat(float[], int);

int main()
{
	float* a = new float[100];
	int n;
	Nhap(a, n);
	DuongTangAmGiam(a, n);
	Xuat(a, n);
	delete[]a;
	return 1;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}

void DuongTangAmGiam(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] > 0 && a[n - 1] > 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
		if (a[i] < 0 && a[n - 1] < 0 && a[i] < a[n - 1])
			swap(a[i], a[n - 1]);
	}
	DuongTangAmGiam(a, n - 1);
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(5);
}