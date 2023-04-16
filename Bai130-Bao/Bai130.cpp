#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float AmLonNhat(float[], int);

int main()
{
	float* a = new float[100];
	int n;
	Nhap(a, n);
	float kq = AmLonNhat(a, n);
	cout << "Gia tri am lon nhat la: " << kq;
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

float AmLonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = AmLonNhat(a, n - 1);
	if (a[n - 1] >= 0)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}