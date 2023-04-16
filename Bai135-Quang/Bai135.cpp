#include<iostream>
#include<cmath>

using namespace std;

int TimGiaTri(int[], int);
bool ktToanLe(int);

int main()
{
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int kq = TimGiaTri(a, n);
	cout << kq;
	return 0;
}
int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (!ktToanLe(a[n - 1]))
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}
bool ktToanLe(int n)
{
	if (n == 0)
		return false;
	bool flag = true;
	for (int i = n = abs(n) ; i != 0 ; i = i / 10)
	{
		if ((i % 10) % 2 == 0)
			flag = false;
	}
	return flag;
}

