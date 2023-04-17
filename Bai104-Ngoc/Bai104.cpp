#include<iostream>
using namespace std;
float NhoNhat(float[], int);
void Nhap(float[], int&);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float nhonhat = NhoNhat(a, n);
	cout << " Gia tri Nho Nhat trong mang la :" << nhonhat;
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}
float NhoNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = NhoNhat(a, n - 1);
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}