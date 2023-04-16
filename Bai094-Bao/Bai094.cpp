#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float TongGiaTri(float[], int);

int main()
{
	float* a = new float[100];
	int n;
	Nhap(a, n);
	float kq = TongGiaTri(a, n);
	cout << "Tong la: " << kq;
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

float TongGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = TongGiaTri(a, n - 1);
	if (a[n - 2] > abs(a[n - 1]))
		s = s + a[n - 2];
	return s;
}