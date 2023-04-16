#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float LonNhat(float[], int);
void LietKe(float[], int);

int main()
{
	float* a = new float[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	delete[]a;
	return 1;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}

float LonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = LonNhat(a, n - 1);
	if (lc < a[n - 1])
		lc = a[n - 1];
	return lc;
}

void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	float lc = LonNhat(a, n - 1);
	if (lc < a[n - 1])
	{
		cout << setw(5) << n - 1;
		return;
	}
	if (lc == a[n - 1])
		cout << setw(5) << n - 1;
	LietKe(a, n - 1);
}
