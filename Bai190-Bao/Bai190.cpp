#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int DemXuatHien(int[], int, int[], int);

int main()
{
	int* a = new int[100];
	int* b = new int[100];
	int n, m;
	cout << "Nhap mang a: " << endl;
	Nhap(a, n);
	cout << "Nhap mang b: " << endl;
	Nhap(b, m);
	int kq = DemXuatHien(a, n, b, m);
	cout << "So lan xuat hien cua mang a trong mang b la: " << kq;
	delete[]a;
	delete[]b;
	return 1;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu [" << i << "] = ";
		cin >> a[i];
	}
}

int DemXuatHien(int a[], int n, int b[], int m)
{
	if (m < n)
		return 0;
	int dem = DemXuatHien(a, n, b, m - 1);
	int vt = m - n;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[vt])
			return dem;
		vt++;
	}
	dem++;
	return dem;
}