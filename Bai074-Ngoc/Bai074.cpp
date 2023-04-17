#include<iostream>
#include<iomanip>
using namespace std;
void LietKe(int[], int);
void Nhap(int[], int&);
bool ChuSoDau(int);
int main()
{
	int a[100];
	cout << "Nhap n:";
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}
bool ChuSoDau(int n)
{
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	ChuSoDau(n / 10);
}
void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ChuSoDau(a[n - 1] % 2) == 1)
		cout << setw(5) << a[n - 1];
}