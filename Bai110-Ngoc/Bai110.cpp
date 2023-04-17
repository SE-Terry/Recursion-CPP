#include<iostream>
using namespace std;
float DuongDau(float[], int);
void Nhap(float[], int&);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float duongdau = DuongDau(a, n);
	if (duongdau != 0)
		cout << "Gia tri duong dau trong mang la :" << duongdau;
	else
		cout << "Khong co gia tri duong";
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}
float DuongDau(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = DuongDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] > 0)
		return a[n - 1];
	return 0;
}