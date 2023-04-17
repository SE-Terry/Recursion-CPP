#include<iostream>
using namespace std;
void ThemBaoToan(float[], int&, float);
void Nhap(float[], int&);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float x;
	cout << "Nhap x: ";
	cin >> x;
	ThemBaoToan(a, n, x);
	for (int i = 0; i < n; i++) cout << a[i]<<" ";
	return 0;
}
void ThemBaoToan(float a[], int&n, float x)
{
	if (n == 0)
	{
		a[0] = x;
		n++;
		return;
	}
	if (x >= a[n - 1])
	{
		a[n] = x;
		n++;
		return;
	}
	a[n] = a[n - 1];
	n--;
	ThemBaoToan(a, n, x);
	n++;
}
void Nhap(float a[], int&n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}