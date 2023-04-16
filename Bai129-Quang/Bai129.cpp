#include<iostream>
#include<cmath>

using namespace std;

int TimViTri(float[], int);

int main()
{
	float a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	float kq = TimViTri(a, n);
	cout << kq;
	return 0;
}
int TimViTri(float a[], int n)
{
	if (n == 0)
		return -1;
	int lc = TimViTri(a, n - 1);
	if (a[n - 1] < 0)
		return lc;
	if (lc == -1)
		return n - 1;
	if (a[n - 1] < a[lc])
		lc = n - 1;
	return lc;
}
