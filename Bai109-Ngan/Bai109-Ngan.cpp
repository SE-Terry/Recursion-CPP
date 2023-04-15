#include <iostream>
#include <iomanip>

using namespace std;

float TimX(int[], int);
void Nhap(float[], int&);
void Xuat(float[], int);

float TimX(float a[], int n)
{
	if (n == 1)
		return abs(a[0]);
	float lc =TimX(a, n - 1);
	if (abs(a[n - 1]) > lc)
		lc = abs(a[n - 1]);
	return lc;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

int main()
{
	float b[100];
	int k;
	Nhap(b, k);
	float x = TimX(b, k);
	cout << "Gia tri x la: " << x;
	return 1;
}