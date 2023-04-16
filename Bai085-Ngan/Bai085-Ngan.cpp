#include <iostream>
#include <iomanip>

using namespace std;

void Lietke(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

void LietKe(int a[], int n)
{
	if (n <= 2)
		return;
	if (a[n - 2] > a[n - 3] && a[n - 2] < abs(a[n - 1]))
		cout << setw(6) << a[n - 2];
	LietKe(a, n - 1);
}


void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

int main()
{
	int b[100];
	int k;
	Nhap(b, k);
	cout << "Cac gia tri trong mang thoa dieu kien:  ";
	LietKe(b, k);
	return 1;
}