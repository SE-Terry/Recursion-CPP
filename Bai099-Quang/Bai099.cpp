#include<iostream>
#include<cmath>

using namespace std;

int DemDoiXung(int[], int);
int ktDoiXung(int);

int main()
{
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int kq = DemDoiXung(a, n);
	cout << kq;
	return 0;
}
int DemDoiXung(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemDoiXung(a, n - 1);
	if (ktDoiXung(a[n - 1]))
		dem++;
	return dem;
}
int ktDoiXung(int n)
{
	n = abs(n);
	int dn = 0;
	for (int t = n; t != 0; t = t / 10)
	{
		dn = dn * 10 + t % 10;
	}
	if (dn == n)
		return 1;
	return 0;
}