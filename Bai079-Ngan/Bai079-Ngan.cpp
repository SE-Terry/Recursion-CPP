#include <iostream>
#include <iomanip>

using namespace std;

bool KtChinhPhuong(int);
void Lietke(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (KtChinhPhuong(a[n - 1]))
		cout << setw(6) << a[n - 1];
}

bool KtChinhPhuong(int k)
{
	bool flag=false;
		for(int i=0;i<=k; i++)
			if(i*i==k)
				flag=true;
		return flag;
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
	cout << "Cac so chinh phuong trong mang la: ";
	LietKe(b, k);
	return 1;
}