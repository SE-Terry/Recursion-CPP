#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float DauTien(float[], int);

int main()
{
	float* a = new float[100];
	int n;
	Nhap(a, n);
	float kq = DauTien(a, n);
	cout << "Gia tri dau tien lon hon 2003 la: " << kq;
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

float DauTien(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = DauTien(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] > 2003)
		return a[n - 1];
	return 0;
}