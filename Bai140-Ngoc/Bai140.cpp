#include<iostream>
using namespace std;
void Nhap(int[], int&);
int ktKhong(int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	if (ktKhong(a, n) == 1)
		cout << "Mang ton tai gia tri khong";
	else
		cout << "Mang khong ton tai gia tri khong";
	return 0;
}
int ktKhong(int a[], int n)
{
	if (n == 0)
		return 0;
	if (a[n - 1] == 0)
		return 1;
	return ktKhong(a, n - 1);
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}
