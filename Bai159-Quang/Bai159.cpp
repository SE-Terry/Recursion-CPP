#include<iostream>
#include<cmath>

using namespace std;

void ChanTangLeTang(int[], int);

int main()
{
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	ChanTangLeTang(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
void ChanTangLeTang(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] % 2 == 0 && a[n - 1] % 2 == 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
		if (a[i] % 2 != 0 && a[n - 1] % 2 != 0 && a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	}
	ChanTangLeTang(a, n - 1);
}
