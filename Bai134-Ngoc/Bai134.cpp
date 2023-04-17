#include<iostream>
#include<iomanip>
using namespace std;
int TimViTri(float[], int);
void Nhap(float[], int&);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	int kq = TimViTri(a, n);
	if (kq != -1)
		cout << "vi tri am lon nhat la :" << kq;
	else
		cout << "khong co vi tri cua gia tri am lon nhat";
	return 0;
}
int TimViTri(float a[], int n)
{
	if (n == 0)
		return -1;
	int lc = TimViTri(a, n - 1);
	if (a[n - 1] >= 0)
		return lc;
	if (lc == -1)
		return n - 1;;
	if (a[n - 1] > a[lc])
		lc = n - 1;
	return lc;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}
