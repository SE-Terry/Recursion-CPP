#include<iostream>
#include<cmath>

using namespace std;

float CuoiCung(float[], int);

int main()
{
	float a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	float kq = CuoiCung(a, n);
	cout << kq;
	return 0;
}
float CuoiCung(float a[], int n)
{
	if (n == 0)
		return -1;
	if (a[n - 1]<0 && a[n - 1]>-1)
	{
		return a[n - 1];
	}
	return CuoiCung(a, n - 1);
}