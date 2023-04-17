#include<iostream>
#include<iomanip>
using namespace std;
int TimGiaTri(int[], int);
bool ChuSoDau(int);
void Nhap(int[], int&);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = TimGiaTri(a, n);
	if (kq != 0)
		cout << "gia tri co chu so dau tien le la :" << kq;
	else
		cout << "khong co gia tri le dau";
	return 0;
}
bool ChuSoDau(int n)
{
	if (n <= 9)
	{
		if (n % 2 != 0)
			return 1;
		return 0;
	}
	ChuSoDau(n / 10);
}
int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TimGiaTri(a, n - 1);
	if (s != 0)
		return s;
	if (ChuSoDau(a[n - 1]) == 1)
		return a[n - 1];
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}
