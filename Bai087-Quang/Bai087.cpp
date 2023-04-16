#include<iostream>
#include<cmath>

using namespace std;

float TongDuong(float[], int);

int main()
{
	float a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	float kq = TongDuong(a, n);
	cout << kq;
	return 0;
}
float TongDuong(float a[], int n)
{
	if (n == 0)
		return 0;
	float s = TongDuong(a, n - 1);
	if (a[n - 1] > 0)
		s = s + a[n - 1];
	return s;
}