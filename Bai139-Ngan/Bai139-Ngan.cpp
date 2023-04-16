#include <iostream>
#include <iomanip>

using namespace std;

int TimBCNN(int[], int);
int bcnn(int, int);
int ucln(int, int);
void Nhap(int[], int&);
void Xuat(int[], int);

int TimBCNN(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = TimBCNN(a, n - 1);
	lc = bcnn(lc, a[n - 1]);
	return lc;
}

int ucln(int a, int b)
{
	a = abs(a);
	b= abs(b);
	while(a*b!=0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a + b);
}

int bcnn(int a, int b)
{
	return abs(a * b) / ucln(a, b);
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
	int kq = TimBCNN(b, k);
	cout << "Boi so chung nho nhat la: " << kq;
	return 1;
}